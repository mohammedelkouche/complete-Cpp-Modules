/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:59:49 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/07 23:00:50 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class Charater;
class   AMateria
{
	protected	:
		std::string type;
 	public	:
		AMateria();
		AMateria(const AMateria &obj);
		AMateria& operator = (const AMateria &obj);
		std::string const &getType()const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target) = 0; // remove it pure and make an impl to it
		virtual ~AMateria();
};

#endif
