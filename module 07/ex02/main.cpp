/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:49:25 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/19 16:04:15 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try {
        Array <int> empty;
        Array <int> data(6);

        std::cout << empty.size() << std::endl;
        // int *a = new int();
        // std::cout << *a <<std::endl;
        // std::cout << "print elememt out of range" << std::endl;
        // Array <int>data[6] = {12 , 345, 46, 87, 234, 789};
        // empty = data;
        for (size_t i = 0; i < 6; i++)
        {
            data[i] = i * 10;
        }
        Array <int> copy(6);
        for (int i = 0; i < 6; i++)
        {
            copy[i] = data[i];
        }
        std::cout << copy[1] << std::endl;
        std::cout << copy[5] << std::endl;
        std::cout << copy[7] << std::endl;
        
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}