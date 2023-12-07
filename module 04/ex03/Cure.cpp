/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:13:46 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/07 23:02:23 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
    this->type = "cure";
}

Cure::Cure(const Cure &obj)
{
    *this = obj;
}
Cure& Cure::operator = (const Cure &obj)
{
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}
std::string const & Cure::getType()const
{
    return (this->type); 
}
AMateria* Cure::clone() const
{
    return(new Cure());
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName()  << " ’s wounds * "<< std::endl;
}
Cure::~Cure()
{
    
}