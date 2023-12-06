/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:59:46 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/06 22:01:30 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "default  AMateria constractor called" << std::endl;
    this->type = "";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}
AMateria& AMateria::operator = (const AMateria &obj)
{
	if (this != &obj)
        this->type = obj.type;
    return (*this);
}

AMateria::AMateria(const AMateria &obj)
{
    *this = obj;
}
std::string const & AMateria::getType() const
{
    return(this->type);
}

AMateria::~AMateria()
{
	std::cout << "default  AMateria destractor called" << std::endl;
}