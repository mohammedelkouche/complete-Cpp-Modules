/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Harl.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:26:42 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/20 11:10:28 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class	Harl
{
	private	:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public	:
		Harl();
		~Harl();
		void complain( std::string level);
};

#endif