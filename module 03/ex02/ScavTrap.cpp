/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:32:42 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/02 23:10:05 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << " Default ScavTrap constructor called " << std::endl;
	this->Name = "name";
	this->Hit_point = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << " parametrized constructor ScavTrap called " << std::endl;
	this->Name = name;
	this->Hit_point = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << " Copy constructor ScavTrap called " << std::endl;
	this->Name = obj.Name;
	this->Hit_point = obj.Hit_point;
	this->Energy_points = obj.Energy_points;
	this->Attack_damage = obj.Attack_damage;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &obj)
{
    std::cout << " Copy assignment operator ScavTrap called " << std::endl;
	if (this != &obj)
	{
		this->Name = obj.Name;
		this->Hit_point = obj.Hit_point;
		this->Energy_points = obj.Energy_points;
		this->Attack_damage = obj.Attack_damage;
	}
	return (*this);
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
	if(Hit_point)
		std::cout << " ScavTrap is now in Gate keeper mode. " << std::endl;
	else
		std::cout << " can't be in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << " Destructor ScavTrap called " << std::endl;
}