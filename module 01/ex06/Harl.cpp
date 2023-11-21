/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:42:03 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/20 11:42:25 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void    Harl::debug(void)
{
	std::cout << " [ DEBUG ] " << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
	std::cout << " [ INFO ] " << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
	std::cout << " [ WARNING ] " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
	std::cout << " [ ERROR ] " << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level)
{
	std::string arr[4] = {"debug","info","warning","error"};
	
	void    (Harl::*ptr_fct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	while(i < 4)
	{
		if (arr[i] == level)
			break ;
		i++; 
	}
	switch (i)
	{
		case (0) :
			(this->*ptr_fct[i++])();
		;
		case (1) :
			(this->*ptr_fct[i++])();
		;
		case (2) :
			(this->*ptr_fct[i++])();
		;
		case (3) :
			(this->*ptr_fct[i++])();
			break ;
		;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}
