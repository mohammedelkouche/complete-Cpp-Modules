/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:50:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/03 22:55:05 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "default  Dog constractor called" << std::endl;
    this->type = "Doc";
}

Dog::Dog(const Dog&obj)
{
    std::cout << "copy constractor Dog called" << std::endl;
    this->type = obj.type;
}
Dog& Dog::operator= (const Dog &obj)
{
    std::cout << "copy assignement operator Dog called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}  

Dog::~Dog()
{
    std::cout << "Dog destractor called" << std::endl;
}