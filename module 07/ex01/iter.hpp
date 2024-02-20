/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:57:39 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/20 22:14:14 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>


template <typename T>
void    print_elelment(T &element)
{
    std::cout << element <<std::endl;
}

template <typename T, typename U>
void    iter(T *array, int lengnt, U func)
{
    for (int i = 0; i < lengnt; i++)
        func(array[i]);
}

#endif