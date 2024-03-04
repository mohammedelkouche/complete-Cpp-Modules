/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:51:41 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/03/04 22:01:44 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int check_date(double year, int month)
{
     switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (((int)year % 4 == 0 && (int)year % 100 != 0) || ((int)year % 400 == 0))
                return 29;
            else
                return 28;
        default:
            return -1;
    }
}

int    check_ligne(std::string ligne)
{
    std::string str_year;
    std::string str_Month;
    std::string str_day;
    double year;
    double Month;
    double day;
    if (ligne.length() < 14)
    {
        std::cout << "Error: bad input => " << ligne <<std::endl;
        return (0);
    }
    for (size_t i = 0; i < ligne.length(); i++)
    {
        if (i < 4 && !isdigit(ligne[i]))
        {
            std::cout << "Error: bad input => " << ligne <<std::endl;
            return(0);
        }
        if (i == 4 && ligne[i] != '-')
        {
            std::cout << "Error: bad input => " << ligne <<std::endl;
            return(0);
        }
        if (i > 4 && i < 7 && !isdigit(ligne[i]))
        {
            std::cout << "Error: bad input => " << ligne <<std::endl;
            return(0);
        }
        if (i == 7 && ligne[i] != '-')
        {
            std::cout << "Error: bad input => " << ligne <<std::endl;
            return(0);
        }
        if (i > 7 && i < 10 && !isdigit(ligne[i]))
        {
            std::cout << "Error: bad input => " << ligne <<std::endl;
            return(0);
        }
        if(i == 11 && (ligne[i] != '|' || ligne[i - 1] != ' ' || ligne[i + 1] != ' '))
        {
            std::cout << "Error: bad input => " << ligne <<std::endl;
            return(0);
        }
        if(i == 13 && ligne[i] == '-')
        {
            std::cout << "Error: not a positive number." <<std::endl;
            return(0);
        }
    }
    str_year = ligne.substr(0,4);
    str_Month = ligne.substr(5,2);
    str_day = ligne.substr(8,2);
    year = std::stod(str_year);
    Month = std::stod(str_Month);
    day = std::stod(str_day);
    if (year < 2009 || year > 2022)
    {
        std::cout << "Error: bad input => " << ligne <<std::endl;
        return(0);
    }
    int res_date = check_date(year, Month);
    if (res_date == -1)
    {
        std::cout << "Error: bad input => " << ligne <<std::endl;
        return(0);
    }
    else if(day > res_date || day == 0)
    {
        std::cout << "Error: bad input => " << ligne <<std::endl;
        return(0);
    }
    return(1);
}

void    result(std::map<std::string, double>& myMap, std::string ligne)
{
    size_t pos;
    size_t pipe;
    std::string date;
    std::string str_price;
    int cout = 0;
    double nbr;
    pos = ligne.find(' ');
    pipe = ligne.find('|');
    date = ligne.substr(0, pos);
    str_price = ligne.substr(pipe + 2, ligne.length() - pipe + 2);
    for (size_t i = 0; i < str_price.length(); i++)
    {
        if (i != 0 && str_price[i] == '.')
        {
            cout++;
            continue;
        }
        if (!isdigit(str_price[i]))
        {
            std::cout << "Error: bad input => " << ligne <<std::endl;
            return ;
        }
    }
    if (cout > 1)
    {
        std::cout << "Error: bad input => " << ligne <<std::endl;
        return ;
    }
    nbr = std::stod(str_price);
    if (nbr > 1000)
    {
        std::cout << "Error: too large a number." <<std::endl;
         return ;
    }
    std::map<std::string, double>::const_iterator it;
    it = myMap.find(date);
    if (it != myMap.end())
    {
        std::cout << date << " => " << nbr << " = "<< nbr *  it->second<<std::endl;
    }
    else
    {
        std::map<std::string, double>::const_iterator lower = myMap.lower_bound(date);
        if (lower != myMap.begin() && lower != myMap.end())
        {
            --lower;
            std::cout << date << " => " << nbr << " = "<< nbr *  lower->second<<std::endl;
        }
        else
        {
            std::cout << "Error: bad input => " << ligne <<std::endl;
            return ;
        }
    }  
}

void    pars_input(std::string argv)
{
    std::ifstream data_base("Data.csv");
    std::map<std::string, double> Map;
    std::string line;
    size_t pos;
    std::string date;
    std::stringstream my_stream;
    std::string str_price;
    double price;
    // ----------------- data_base -------------------
    if (data_base.is_open())
    {
        std::getline(data_base, line);
        while(std::getline(data_base, line))
        {
            pos = line.find(',');
            date = line.substr(0, pos);
            str_price = line.substr(pos + 1, line.length() - pos + 1);
            my_stream << str_price;
            my_stream >> price;
            // if (!(my_stream >> price))
            // {
            //     std::cout << "failed" << std::endl;
            //     return ;
            // }
            Map.insert(std::make_pair(date, price));
            my_stream.clear();
        }
        data_base.close();
    }
    else
    {
        std::cout << "  file database not existe" <<std::endl;
        return;
    }
    // ----------------- input input file -------------------
    std::ifstream myfile(argv);
    std::string myline;
    if (myfile.is_open())
    {
        if (!std::getline(myfile, myline))
        {
            std::cout << " the file is empti" <<std::endl;
            myfile.close();
            return;
        }
        if (myline.compare("date | value"))
        {
            std::cout << " Error" <<std::endl;
            myfile.close();
            return;
        }
        while(std::getline(myfile, myline))
        {
            if (check_ligne(myline))
                result(Map, myline);
        }
        myfile.close();
    }
    else
        std::cout << "file not exsist" << std::endl;
}