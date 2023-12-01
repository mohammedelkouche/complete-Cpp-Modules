/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:26:45 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/01 23:20:31 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    // int i = 0;
    ClapTrap a("lion");
    ClapTrap b(a);
    // ClapTrap a;
    // while (i <= 9)
    // {
    //     a.attack("elephon");
    //     i++;
    // }
    // a.takeDamage(12);
    a.takeDamage(346);
    a.Status();
    a.attack("CHIWA&ED");
    // ClapTrap b(a);
    // while (i <= 10)
    // {
    //     a.beRepaired(1);
    //     i++;
    // }
    return 0;
}