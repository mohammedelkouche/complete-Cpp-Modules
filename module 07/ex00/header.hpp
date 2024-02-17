/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:22:08 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/17 22:53:45 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
template <typename T>

void swap (T &x, T &y)
{
    T temp;

    temp = x;
    x = y;
    y = temp;
}

template <typename T>

T min(T &x, T &y)
{
    if (x < y)
        return x;
    else
        return y;
}

template <typename T>

T max(T &x, T &y)
{
    if (x > y)
        return x;
    else
        return y;
}

#endif