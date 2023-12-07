/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:59:46 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/07 23:01:56 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->type = "type";
}

AMateria& AMateria::operator = (const AMateria &obj)
{
	// if (this != &obj)
    //     this->type = obj.type;
    (void)obj;
    return (*this);
}

AMateria::AMateria(const AMateria &obj)
{
   (void)obj;
}

std::string const & AMateria::getType() const
{
    return(this->type);
}

AMateria::~AMateria()
{
    
}