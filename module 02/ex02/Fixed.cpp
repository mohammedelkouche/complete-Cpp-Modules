/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:58:35 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/26 21:54:31 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fraction_bits = 8;

Fixed::Fixed()
{
    std::cout << " Default constructor called " << std::endl;
    fix_point = 0;
};

Fixed::Fixed(const Fixed&obj)
{
    std::cout << " Copy constructor called " << std::endl;
    // this->fix_point = obj.getRawBits();
    *this = obj;
}

Fixed::Fixed(const int nbr)
{
    std::cout << " Int constructor called " << std::endl;
    this->fix_point = nbr * (1 << this->fraction_bits);
}

Fixed::Fixed(const float nbr)
{
    std::cout << " Float constructor called " << std::endl;
    this->fix_point = roundf(nbr * (1 << this->fraction_bits));
}

float Fixed::toFloat(void)const
{
    return (this->fix_point / (float)(1 << this->fraction_bits));
}

int Fixed::toInt(void)const
{
    return ((this->fix_point / (1 << this->fraction_bits)));
}

int Fixed::getRawBits(void) const
{
    std::cout << " getRawBits member function called " << std::endl;
    return(this->fix_point);
}

Fixed& Fixed::operator = (const Fixed &obj)
{
    std::cout << " Copy assignment operator called " << std::endl;
    if (this != &obj)
        this->fix_point = obj.fix_point;
    return (*this);
}

std::ostream& operator<<(std::ostream& os ,const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}

void Fixed::setRawBits( int const raw)
{
    this->fix_point = raw;
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

Fixed& Fixed::operator + (const Fixed &obj)const
{
    return(this->toFloat() + obj.toFloat());
}
// Fixed& Fixed::operater + (const Fixed &obj)const
// {
    
// }
Fixed::~Fixed()
{
    std::cout << " Destructor called " << std::endl;
}