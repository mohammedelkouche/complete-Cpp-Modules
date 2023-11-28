/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:58:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/27 17:34:04 by mel-kouc         ###   ########.fr       */
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
		
		Fixed operator +(const Fixed &obj)const;
		Fixed operator -(const Fixed &obj)const;
		Fixed operator *(const Fixed &obj)const;
		Fixed operator /(const Fixed &obj)const;

		bool operator < (const Fixed &obj)const;
		bool operator > (const Fixed &obj)const;
		bool operator <= (const Fixed &obj)const;
		bool operator >= (const Fixed &obj)const;
		bool operator == (const Fixed &obj)const;
		bool operator != (const Fixed &obj) const;
		
		float toFloat( void ) const;
		int	toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits( int const raw);

		Fixed& operator ++();
		Fixed& operator --();
		Fixed operator ++(int);
		Fixed operator --(int);
		
		static	Fixed &min(Fixed &obj1, Fixed &obj2);
		static	const Fixed& min(const Fixed &obj1, const Fixed &obj2);
		// const static	Fixed& max(Fixed const &obj1, Fixed const &obj2);
		static	Fixed& max(Fixed &obj1, Fixed  &obj2);
		static	const Fixed& max(Fixed const &obj1, Fixed const &obj2);
		// static	const Fixed& max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream& operator<<(std::ostream& os ,const Fixed &obj);

#endif