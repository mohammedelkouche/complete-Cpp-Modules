/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:31:05 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/21 23:29:06 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <vector>
#include <iostream>

template <typename T>

int easyfind(T array, int ocurrance)
{
    std::vector<int>::iterator it;

    it = std::find(array.begin(), array.end(), ocurrance);
    if (it != array.end())
        std::cout << ocurrance << std::endl;
    else
        throw std::out_of_range("value not fount");
    return(1);
}

#endif