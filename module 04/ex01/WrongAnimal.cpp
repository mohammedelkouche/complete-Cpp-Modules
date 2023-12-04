/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:14:01 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/04 15:36:52 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "default  WrongAnimal constractor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal&obj)
{
    std::cout << "copy constractor WrongAnimal called" << std::endl;
    this->type = obj.type;
}
WrongAnimal& WrongAnimal::operator= (const WrongAnimal &obj)
{
    std::cout << "copy assignement operator WrongAnimal called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}  

std::string WrongAnimal::getType() const
{
    std::cout << "getType WrongAnimal called" << std::endl;    
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << " the " << type  << " say WrongAnimal " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destractor called" << std::endl;
}