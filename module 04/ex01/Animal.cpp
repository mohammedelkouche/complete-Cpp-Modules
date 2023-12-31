/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 21:40:23 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/04 14:04:53 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default  Animal constractor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal&obj)
{
    std::cout << "copy constractor Animal called" << std::endl;
    this->type = obj.type;
}
Animal& Animal::operator= (const Animal &obj)
{
    std::cout << "copy assignement operator Animal called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}  

std::string Animal::getType() const
{
    std::cout << "getType Animal called" << std::endl;    
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << " the " << type  << " say oooooo " << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destractor called" << std::endl;
}