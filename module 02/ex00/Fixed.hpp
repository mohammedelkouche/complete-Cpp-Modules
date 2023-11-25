/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:58:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/25 02:29:17 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	private	:
		int fix_point;
		static const int fraction_bits = 8;
	public	:
		Fixed();
		Fixed(const Fixed&obj);
		Fixed& operator = (const Fixed &obj);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits( int const raw);
};

#endif