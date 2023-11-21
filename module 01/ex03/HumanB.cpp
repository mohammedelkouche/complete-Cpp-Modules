/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:31:33 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/21 11:58:01 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name)
{
	this->name = name;
	this->wp  = NULL;
}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon &club)
{
	this->wp = &club;
}

void	HumanB::attack()
{
	if(this->wp)
		std::cout << this->name << " attacks with their " << this->wp->getType() <<  std::endl;
}
