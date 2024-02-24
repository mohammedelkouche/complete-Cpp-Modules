/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:49:25 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/21 15:14:11 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try {
        Array <int> empty;
        Array <int> data(6);

        std::cout << "the sise of data  = "<< data.size() << std::endl;
        for (size_t i = 0; i < 6; i++)
        {
            data[i] = i * 10;
        }
        Array <int> copy(6);
		data[0] = 1000;
        copy = data;
        std::cout << copy[1] << std::endl;
        copy[1] = 120;
        std::cout << copy[1] << std::endl;
        std::cout << copy[2] << std::endl;
        std::cout << copy[5] << std::endl;
        std::cout << copy[7] << std::endl;
        
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
