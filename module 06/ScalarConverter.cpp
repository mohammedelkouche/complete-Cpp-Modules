/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:04:44 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/12 23:16:25 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
            // std::cout << "hello" << std::endl;
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
                // std::cout << str[i] << std::endl;
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

// int check_is_double(std::string str)
// {
    
// }

void ScalarConverter::convert(std::string str)
{
    // get_type of str;
    // bool    status_type;
    
    // check_is_int(str);
    // check_is_char(str);
    if (check_is_float(str))
    {
        std::cout << "float" << std::endl;
    }
    // check_is_double(str);
    
    // status_type = false;
    // if (is_char(str))
    // else if(is_int(str))
    // else if (is_float(str))
    // else if (is_double(str))
}