/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:58:35 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/01 12:06:22 by mel-kouc         ###   ########.fr       */
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

int Fixed::getRawBits(void) const
{
    std::cout << " getRawBits member function called " << std::endl;
    return(this->fix_point);
}

Fixed& Fixed::operator = (const Fixed &obj)
{
    std::cout << " Copy assignment operator called " << std::endl;
    if (this != &obj)
        this->fix_point = obj.getRawBits();
    return (*this);
}

void Fixed::setRawBits( int const raw)
{
    this->fix_point = raw;
}

Fixed::~Fixed()
{
    std::cout << " Destructor called " << std::endl;
}