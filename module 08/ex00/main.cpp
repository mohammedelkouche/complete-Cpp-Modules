/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:31:03 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/21 23:30:14 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        // std::vector<int> vec {10, 20, 30 ,40, 50};
        // std::vector<int> marks = {50, 45, 47, 65, 80};
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        vec.push_back(40);
        int occurance = 40;
        easyfind(vec, occurance);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        vec.push_back(40);
        int occurance = 45;
        easyfind(vec, occurance);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return(0);
}