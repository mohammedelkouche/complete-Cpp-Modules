/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:51:41 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/29 00:34:32 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


// void    stor_db(std::ifstream& data)
// {
//     std::map<std::string, float> Map;
//     std::string line;
//     size_t pos;
//     std::string date;
//     std::string str_price;
//     float price;
//     std::getline(data, line);
//     int i = 0;
//     while(std::getline(data, line))
//     {
//         pos = line.find(',');
//         date = line.substr(0, pos);
//         str_price = line.substr(pos + 1, line.length() - pos + 1);
//         price = std::stof(str_price);
//         std::cout << price << std::endl;
//         Map.insert(std::make_pair(date, price));
//         i++;
//     }
//     return ;
// }

int    check_ligne(std::string ligne)
{
    size_t pos;
    pos = ligne.find('|');
    if (pos != std::string::npos && pos == 11 && ligne.length() >= 14)
    {
        if (ligne[pos - 1] != ' ' || ligne[pos + 1] != ' ')
        {
            std::cout << "Error: bad input => " << ligne <<std::endl;
            return (0);
        }
    }
    else
    {
        std::cout << "Error: bad input => " << ligne << std::endl;
        return (0);
    }
    std::cout << ligne << std::endl;
    return(1);
}

void    result(std::map<std::string, float>& myMap, std::string ligne)
{
    (void)myMap;
    (void)ligne;
    size_t pos;
    size_t pipe;
    std::string date;
    std::string str_price;
    float nbr;
    pos = ligne.find(' ');
    pipe = ligne.find(' ');
    date = ligne.substr(0, pos);
    str_price = ligne.substr(pipe + 2, ligne.length() - pipe + 2);
    std::cout << "str_price =" << str_price <<  "hay" << std::endl;
    std::cout << "ligne" << std::endl;
    nbr = std::stof(str_price);
    std::cout << date << std::endl;
    std::map<std::string, float>::const_iterator it;
    for (it = myMap.begin(); it != myMap.end() ; ++it)
    {
        if (it->first == date)
            std::cout << "ligne = " << nbr *  it->second<<std::endl;
    }
    
}

void    pars_input(char *argv)
{
    std::ifstream data_base("Data.csv");
    std::map<std::string, float> Map;
    std::string line;
    size_t pos;
    std::string date;
    std::string str_price;
    float price;
    // ----------------- data_base -------------------
    if (data_base.is_open())
    {
        std::getline(data_base, line);
        int i = 0;
        while(std::getline(data_base, line))
        {
            pos = line.find(',');
            date = line.substr(0, pos);
            str_price = line.substr(pos + 1, line.length() - pos + 1);        
            price = std::stof(str_price);
            // std::cout << price << std::endl;
            Map.insert(std::make_pair(date, price));
            i++;
        }
        // stor_db(data_base);
    }
    else
    {
        std::cout << "  file database not existe" <<std::endl;
        return;
    }
    // ----------------- input input file -------------------
    std::ifstream myfile(argv);
    std::string myline;
    if (!std::getline(myfile, myline))
    {
        std::cout << " the file is empti" <<std::endl;
        return;
    }
    if (myline.compare("date | value"))
    {
        std::cout << " Error" <<std::endl;
        return;
    }
    if (myfile.is_open())
    {
        while(std::getline(myfile, myline))
        {
            if (check_ligne(myline))
            {
                // result function 
                result(Map, myline);
            }
        }
        myfile.close();
    }
    else
        std::cout << "file not exsist" << std::endl;
}