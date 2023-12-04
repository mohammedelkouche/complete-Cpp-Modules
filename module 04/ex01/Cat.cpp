/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:31:13 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/04 22:35:44 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "default  Cat constractor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat&obj)
{
    std::cout << "copy constractor Cat called" << std::endl;
    this->type = obj.type;
    this->brain = obj.brain;
}
Cat& Cat::operator= (const Cat &obj)
{
    std::cout << "copy assignement operator Cat called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
        this->brain = obj.brain;
    }
    return (*this);
}  

void Cat::makeSound() const
{
    std::cout << " the " << type  << " say myaw " << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destractor called" << std::endl;
    delete brain;
}