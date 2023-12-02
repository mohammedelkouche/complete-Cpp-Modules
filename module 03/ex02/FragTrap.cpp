/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:52:38 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/02 23:08:49 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << " Default FragTrap constructor called " << std::endl;
	this->Name = "name";
	this->Hit_point = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << " parametrized constructor FragTrap called " << std::endl;
	this->Name = name;
	this->Hit_point = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << " Copy constructor FragTrap called " << std::endl;
	this->Name = obj.Name;
	this->Hit_point = obj.Hit_point;
	this->Energy_points = obj.Energy_points;
	this->Attack_damage = obj.Attack_damage;
}

FragTrap& FragTrap::operator = (const FragTrap &obj)
{
    std::cout << " Copy assignment operator FragTrap called " << std::endl;
	if (this != &obj)
	{
		this->Name = obj.Name;
		this->Hit_point = obj.Hit_point;
		this->Energy_points = obj.Energy_points;
		this->Attack_damage = obj.Attack_damage;
	}
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	
	if (Energy_points > 0 && Hit_point > 0)
	{
		std::cout << " FragTrap " << Name << " attacks " << target << " causing "
		 	<< Attack_damage << " points of damage!" << std::endl;
		Energy_points--;
	}
	else
		std::cout << " FragTrap " << Name <<  " can't attack " << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if(Hit_point > 0)
		std::cout << " FragTrap " << Name << ": High five!" << std::endl;
	else
		std::cout << " can't ." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << " Destructor FragTrap called " << std::endl;
}