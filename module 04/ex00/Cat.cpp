/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:31:13 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/03 22:54:20 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "default  Cat constractor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat&obj)
{
    std::cout << "copy constractor Cat called" << std::endl;
    this->type = obj.type;
}
Cat& Cat::operator= (const Cat &obj)
{
    std::cout << "copy assignement operator Cat called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}  

Cat::~Cat()
{
    std::cout << "Cat destractor called" << std::endl;
}