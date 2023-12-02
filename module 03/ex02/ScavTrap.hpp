/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:32:45 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/02 18:07:41 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &obj);
        ScavTrap& operator = (const ScavTrap &obj);
        void guardGate(void);
        void attack(const std::string& target);
        // void Status(void);
        ~ScavTrap();
};

#endif