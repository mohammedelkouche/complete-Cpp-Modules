/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:31:11 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/02 22:20:28 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// void ClapTrap::Status(void)
// {
// 	std::cout << "Energy_points " <<  Energy_points <<std::endl;
// 	std::cout << "Hit_point     " <<  Hit_point <<std::endl;
// 	std::cout << "Name          " << Name <<std::endl;
// }

ClapTrap::ClapTrap()
{
	std::cout << " Default constructor called " << std::endl;
	this->Name = "name";
	this->Hit_point = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
};

ClapTrap::ClapTrap(std::string name)
{
	std::cout << " parametrized constructor called " << std::endl;
	this->Name = name;
	this->Hit_point = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << " Copy constructor called " << std::endl;
	// *this = obj;
	this->Name = obj.Name;
	this->Hit_point = obj.Hit_point;
	this->Energy_points = obj.Energy_points;
	this->Attack_damage = obj.Attack_damage;
}

void ClapTrap::attack(const std::string& target)
{
	
	if (Energy_points > 0 && Hit_point > 0)
	{
		std::cout << " ClapTrap " << Name << " attacks " << target << " causing "
		 	<< Attack_damage << " points of damage!" << std::endl;
		Energy_points--;
	}
	else
		std::cout << " ClapTrap " << Name <<  " can't attack " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy_points > 0 && Hit_point > 0)
	{
		std::cout << " ClapTrap " << Name << " repairs itself,it gets "
		<< amount << " hit points back. " << std::endl;
		Hit_point = Hit_point + amount;
		Energy_points--;
	}
	else
		std::cout <<  " ClapTrap " << Name << " can't repair " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{	
	if (Hit_point > 0)
	{
		std::cout << " ClapTrap " << Name << " took damage of "
		<< amount << " hit points." << std::endl;
		if (amount > this->Hit_point)
			this->Hit_point = 0;
		else
			Hit_point = Hit_point - amount;
		
		// std::cout << Hit_point <<std::endl;
	}
	else
		std::cout << " ClapTrap " << Name << " is dead " << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &obj)
{
    std::cout << " Copy assignment operator called " << std::endl;
	if (this != &obj)
	{
		this->Name = obj.Name;
		this->Hit_point = obj.Hit_point;
		this->Energy_points = obj.Energy_points;
		this->Attack_damage = obj.Attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << " Destructor called " << std::endl;
}


