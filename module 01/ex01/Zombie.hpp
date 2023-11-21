/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:43:16 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/17 00:24:13 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	private :
		std::string name ;
	public	:
		Zombie();
		~Zombie();
		void	announce(void);
		void	set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name );

#endif