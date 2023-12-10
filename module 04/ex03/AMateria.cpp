/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:59:46 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/09 23:41:39 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->type = "type";
}

AMateria::AMateria(const AMateria &obj)
{
   *this =  obj;
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}
AMateria& AMateria::operator = (const AMateria &obj)
{
    (void)obj;
    return (*this);
}


std::string const & AMateria::getType() const
{
    return(this->type);
}

AMateria::~AMateria()
{
    
}