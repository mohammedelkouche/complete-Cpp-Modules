/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:58:35 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/28 20:05:55 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction_bits = 8;

Fixed::Fixed()
{
    fix_point = 0;
};

Fixed::Fixed(const Fixed&obj)
{
    // this->fix_point = obj.getRawBits();
    *this = obj;
}

///////////
Fixed::Fixed(const int nbr)
{
    this->fix_point = nbr * (1 << this->fraction_bits);
}

Fixed::Fixed(const float nbr)
{
    this->fix_point = roundf(nbr * (1 << this->fraction_bits));
}

///////////
float Fixed::toFloat(void)const
{
    return (this->fix_point / (float)(1 << this->fraction_bits));
}

int Fixed::toInt(void)const
{
    return ((this->fix_point / (1 << this->fraction_bits)));
}

//////////////////////

int Fixed::getRawBits(void) const
{
    return(this->fix_point);
}
void Fixed::setRawBits( int const raw)
{
    this->fix_point = raw;
}

//////////////////

Fixed& Fixed::operator = (const Fixed &obj)
{
    if (this != &obj)
        this->fix_point = obj.fix_point;
    return (*this);
}
std::ostream& operator<<(std::ostream& os ,const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}

 
bool Fixed::operator < (const Fixed &obj) const
{
    return (this->fix_point < obj.fix_point);
}
bool Fixed::operator > (const Fixed &obj) const
{
    return (this->fix_point > obj.fix_point);
}
bool Fixed::operator <= (const Fixed &obj) const
{
    return (this->fix_point <= obj.fix_point);
}
bool Fixed::operator >= (const Fixed &obj) const
{
    return (this->fix_point >= obj.fix_point);
}
bool Fixed::operator == (const Fixed &obj) const
{
    return (this->fix_point == obj.fix_point);
}
bool Fixed::operator != (const Fixed &obj) const
{
    return (this->fix_point != obj.fix_point);
}

Fixed Fixed::operator +(const Fixed &obj)const
{
    return(Fixed(this->toFloat() + obj.toFloat()));
}
Fixed Fixed::operator -(const Fixed &obj)const
{
    return(Fixed(this->toFloat() - obj.toFloat()));
}
Fixed Fixed::operator *(const Fixed &obj)const
{
    return(Fixed(this->toFloat() * obj.toFloat()));
}
Fixed Fixed::operator /(const Fixed &obj)const
{
    return(Fixed(this->toFloat() / obj.toFloat()));
}

/////////////////
 
Fixed& Fixed::operator ++()
{
    // Pre-increment
    this->fix_point++;
    return *this;
}
Fixed& Fixed::operator --()
{
    // Pre-decrement
    this->fix_point--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
        // Post-decrement
        Fixed obj = *this;
        --(*this);
        return (obj);
}

Fixed Fixed::operator++(int)
{
        // Post-increment
        Fixed obj = *this;
        ++(*this);
        return (obj);
}

////////////////////////////////

const	Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1.getRawBits() < obj2.getRawBits())
        return (obj1);
    return (obj2);
}
Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if (obj1.getRawBits() < obj2.getRawBits())
        return (obj1);
    return (obj2);
}

const Fixed &Fixed::max(Fixed const &obj1, Fixed const &obj2) 
{
    if (obj1.getRawBits() > obj2.getRawBits())
        return (obj1);
    return (obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed  &obj2)
{
    if (obj1.getRawBits() > obj2.getRawBits())
        return (obj1);
    return (obj2);
}

Fixed::~Fixed()
{}