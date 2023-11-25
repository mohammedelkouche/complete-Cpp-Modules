/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:58:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/25 21:45:30 by mel-kouc         ###   ########.fr       */
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
		static const int fraction_bits;
	public	:
		Fixed();
		Fixed(const Fixed&obj);
		Fixed& operator = (const Fixed &obj);
		~Fixed();
		Fixed(const int test);
		Fixed(const float test);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits( int const raw);
};

std::ostream& operator<<(std::ostream& os ,const Fixed &obj);

#endif