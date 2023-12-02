/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:32:42 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/02 16:10:34 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << " Default derived ScavTrap constructor called " << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << " parametrized derived constructor called " << std::endl;
	this->Name = name;
	this->Hit_point = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << " Copy constructor derived called " << std::endl;
	// *this = obj;
	this->Name = obj.Name;
	this->Hit_point = obj.Hit_point;
	this->Energy_points = obj.Energy_points;
	this->Attack_damage = obj.Attack_damage;
}

void ScavTrap::attack(const std::string& target)
{
	
	if (Energy_points > 0 && Hit_point > 0)
	{
		std::cout << " ScavTrap " << Name << " attacks " << target << " causing "
		 	<< Attack_damage << " points of damage!" << std::endl;
		Energy_points--;
	}
	else
		std::cout << " ScavTrap " << Name <<  " can't attack " << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << " ScavTrap is now in Gate keeper mode. " << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << " Destructor ScavTrap called " << std::endl;
}