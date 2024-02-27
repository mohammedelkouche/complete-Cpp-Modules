/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:49:35 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/27 11:23:42 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    (void)argv;
    // std::cout << argc <<std::endl;
    if (argc == 2)
    {
        pars_input(argv[1]);
    }
    else
        std::cout << "Error: could not open file." << std::endl;
}