/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:48:55 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/21 20:47:32 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    int i = 0;
    Zombie *arr = zombieHorde(N, "1337");
    if (arr == NULL)
        return (0);
    while (i < N)
    {
        arr->announce();
        i++;
    }
    delete []arr;
    return (0);
}