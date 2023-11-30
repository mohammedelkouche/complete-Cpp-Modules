/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:58:29 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/30 10:22:22 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed  a;
    Fixed  const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    Fixed c;
    c = a + b;
    
    std::cout << c << std::endl;
    if (c <b )
            std::cout << "b is gerat" << std::endl;
    else
        std::cout << "b is small" << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}