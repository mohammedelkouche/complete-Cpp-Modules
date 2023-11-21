/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:42:04 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/18 17:00:01 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &club) : wp(club)
{
	this->name = name;
}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " <<  wp.getType() << std::endl;
}
