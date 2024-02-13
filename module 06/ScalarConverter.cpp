/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:04:44 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/13 22:44:40 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <limits>
#include <string>
#include <iomanip>

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::~ScalarConverter()
{
    
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this != &other)
    {
        
    }
    return(*this);
}


int check_is_int(std::string str)
{
    int i = 0;
    int len = str.length();
    if (str[0] == '+' || str[i] == '-')
        i++;
    for (; i < len ; i++)
    {
        if (!isdigit(str[i]))
            return (0);
    }
    return (1);
}

int check_is_char(std::string str)
{
    int len = str.length();
    if (len == 1 && !isdigit(str[0]) && isprint(str[0]))
        return(1);
    else
        return(0);
}

int check_is_float(std::string str)
{
    size_t pos;
    int len = str.length();
    int flag = 0;
    int sign = 0;
    
    if (len != 0 && str[len - 1] == 'f' && str.compare("-inff") && str.compare("+inff"))
    {
        pos = str.find('.');
        if (pos != std::string::npos)
        {
            int i = 0;
            if (str[0] == '+' || str[i] == '-')
            {
                sign = 1;
                i++;
            }
            for (; i < len; i++)
            {
                if (str[i] == '.')
                    break;
                if (!isdigit(str[i]))
                    return (0);
            }
            int j = i;
            j++;// for increment .
            for (; j < len - 1 ; j++)
            {
                flag = 1;
                if (!isdigit(str[j]))
                    return (0);
            }
            if ((flag == 1 && i >= 2 && sign == 1) || (flag == 1 && i >= 1&& sign == 0))
                return (1);
        }
    }
    return(0);
}

int check_is_double(std::string str)
{
    size_t pos;
    int len = str.length();
    int flag = 0;
    int sign = 0;
    
    if (len != 0 && str[len - 1] != 'f' && str.compare("-inff") && str.compare("+inff") && str.compare("nanf"))
    {
        pos = str.find('.');
        if (pos != std::string::npos)
        {
            int i = 0;
            if (str[0] == '+' || str[i] == '-')
            {
                sign = 1;
                i++;
            }
            for (; i < len; i++)
            {
                if (str[i] == '.')
                    break;
                if (!isdigit(str[i]))
                    return (0);
            }
            int j = i;
            j++;// for increment .
            for (; j < len; j++)
            {
                flag = 1;
                if (!isdigit(str[j]))
                    return (0);
            }
            if ((flag == 1 && i >= 2 && sign == 1) || (flag == 1 && i >= 1&& sign == 0))
                return (1);
        }
    }
    return(0);
}

void    convert_to_char(std::string str)
{
    std::cout << "char : " << static_cast <char> (str[0]) << std::endl;
    std::cout << "int : " << static_cast <int> (str[0]) << std::endl;
    std::cout << "float : " << static_cast <float> (str[0]) << ".0f" << std::endl;
    std::cout << "double : " << static_cast <double> (str[0]) << ".0" << std::endl;
}

void    convert_to_int(std::string str)
{
    long long int value;
    int flag = 0;
    std::istringstream my_stream(str);

    my_stream >> value;
    if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
        flag = 1;
    if (isprint(value))
        std::cout << "char : " << static_cast <char> (value) << std::endl;
    else
        std::cout << "char : Non displayable" << std::endl;
    if (flag == 1)
        std::cout << "int : " "impossible" << std::endl;
    else
        std::cout << "int : " << static_cast <int> (value) << std::endl;
    std::cout << "float : " << static_cast <float> (value) << ".0f" << std::endl;
    std::cout << "double : " << static_cast <double> (value) << ".0" << std::endl;
}

void    convert_to_float(std::string str)
{
    long double value;
    int flag = 0;
    std::string literal;
    literal = str.substr(0, str.length() - 1);
    std::istringstream my_stream(literal);

    my_stream >> value;
    if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
        flag = 1;
    if (isprint(value))
        std::cout << "char : " << static_cast <char> (value) << std::endl;
    else
        std::cout << "char : Non displayable" << std::endl;
    std::cout << "int : " << static_cast <int> (value) << std::endl;
    if (flag == 1)
        std::cout << "float : impossible" << std::endl;
    else
        std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast <float> (value)<< "f" << std::endl;
    std::cout << "double : " << static_cast <double> (value) << std::endl;
}

void    convert_to_double(std::string str)
{
    long double value;
    int flag = 0;
    std::istringstream my_stream(str);

    my_stream >> value;
    if (value < -std::numeric_limits<double>::max() || value > std::numeric_limits<double>::max())
        flag = 1;
    if (isprint(value))
        std::cout << "char : " << static_cast <char> (value) << std::endl;
    else
        std::cout << "char : Non displayable" << std::endl;
    std::cout << "int : " << static_cast <int> (value) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast <float> (value)<< "f" << std::endl;
    if (flag == 1)
        std::cout << "float : impossible" << std::endl;
    else
        std::cout << "double : " << static_cast <double> (value) << std::endl;
}

void ScalarConverter::convert(std::string str)
{
    // get_type of str;
    // bool    status_type;
    std::string type = "";
    
    if(str.empty())
        return ;
    if (check_is_int(str))
    {
        type = "INT";
        std::cout << "int type" << std::endl;
    }
    else if (check_is_char(str))
    {
        type = "CHAR";
        std::cout << "char type" << std::endl;
    }
    else if (check_is_float(str))
    {
        type = "FLOAT";
        std::cout << "float type" << std::endl;
    }
    else if (check_is_double(str))
    {
        type = "DOUBLE";
        std::cout << "double type" << std::endl;
    }
    if (!type.empty() && !type.compare("CHAR"))
        convert_to_char(str);
    else if (!type.empty() && !type.compare("INT"))
        convert_to_int(str);
    else if (!type.empty() && !type.compare("FLOAT"))
        convert_to_float(str);
    else if (!type.empty() && !type.compare("DOUBLE"))
        convert_to_double(str);
    // check +inf -inf nan nanf
}