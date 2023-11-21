/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:11:15 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/21 11:50:41 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class   Weapon
{
	private	:
		std::string type;
	public	:
		Weapon(std::string type);
		~Weapon();
		std::string const	&getType();
		void	setType(std::string type);
};

#endif