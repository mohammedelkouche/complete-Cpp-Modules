/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:58:35 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/25 03:29:44 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << " Default constructor called " << std::endl;
    fix_point = 0;
};

Fixed::Fixed(const Fixed&obj)
{
    std::cout << " Copy constructor called " << std::endl;
    // *this = obj;
}

int Fixed::getRawBits(void) const
{
    std::cout << " getRawBits member function called " << std::endl;
    return(this->fix_point);
}

// Fixed& Fixed::operator = (const Fixed &obj)
// {
//     std::cout << " Copy assignment operator called " << std::endl;
// }

void Fixed::setRawBits( int const raw)
{
    this->fix_point = raw;
}

Fixed::~Fixed()
{
    std::cout << " Destructor called " << std::endl;
}