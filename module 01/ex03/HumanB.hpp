/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:42:36 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/21 14:32:19 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{
	private	:
		std::string	name;
		Weapon *wp;
	public	:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &club);
		void	attack(void);
};

#endif