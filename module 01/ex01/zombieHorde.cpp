/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:59:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/18 17:56:39 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    int i = 0;

    if (N < 0)
        return (NULL);
    Zombie  *newarr = new Zombie[N];
    while (i < N)
    {
        newarr[i].set_name(name);
        i++;
    }
    return (newarr);
}