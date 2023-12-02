/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:52:52 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/02 20:42:12 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &obj);
        FragTrap& operator = (const FragTrap &obj);
        void attack(const std::string& target);
        void highFivesGuys(void);
        // void Status(void);
        ~FragTrap();
};

#endif