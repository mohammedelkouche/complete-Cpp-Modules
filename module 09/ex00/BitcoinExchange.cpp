/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:51:41 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/27 23:07:19 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


void    pars_input(char *argv)
{
    std::ifstream myfile(argv);
    std::string myline;
    size_t pos;
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
            pos = myline.find('|');
            if (pos != std::string::npos)
            {
                if (myline[pos - 1] != ' ' || myline[pos + 1] != ' ')
                { 
                    std::cout << "Error: bad input => " << myline <<std::endl;
                    continue;
                }
            }
            else
                std::cout << "Error: bad input => " << myline << std::endl;
            std::cout << myline << std::endl;
        }
        myfile.close();
    }
    else
        std::cout << "file not exsist" << std::endl;
}