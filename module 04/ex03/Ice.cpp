/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:12:26 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/06 23:42:37 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::Ice(std::string const & type)
{
    this->type = type;
}
Ice::Ice(const Ice &obj)
{
    *this = obj;
}
Ice& Ice::operator = (const Ice &obj)
{
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}
std::string const & Ice::getType()const
{
    return (this->type); 
}

AMateria* Ice::clone()const
{
    return(new Ice());
}
Ice::~Ice()
{
    
}