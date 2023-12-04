/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:50:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/04 22:48:24 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "default  Dog constractor called" << std::endl;
    this->type = "Doc";
    this->brain = new Brain();
}

Dog::Dog(const Dog&obj)
{
    std::cout << "copy constractor Dog called" << std::endl;
    this->type = obj.type;
    this->brain = obj.brain;
}
Dog& Dog::operator= (const Dog &obj)
{
    std::cout << "copy assignement operator Dog called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
        this->brain = obj.brain;
    }
    return (*this);
}  

// std::string Dog::getType()
// {
//     return (this->type);
// }

void Dog::makeSound() const
{
    std::cout << " the " << type  << " say how " << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destractor called" << std::endl;
}