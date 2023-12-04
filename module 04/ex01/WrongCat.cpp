/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:02:10 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/04 15:14:24 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "default  WrongCat constractor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat&obj)
{
    std::cout << "copy constractor WrongCat called" << std::endl;
    this->type = obj.type;
}
WrongCat& WrongCat::operator= (const WrongCat &obj)
{
    std::cout << "copy assignement operator WrongCat called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << " the " << type  << " say WrongCat " << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destractor called" << std::endl;
}
