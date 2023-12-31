/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:12:30 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/07 23:02:43 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class   Ice : public AMateria
{
 	public	:
		Ice();
		Ice(const Ice &obj);
		Ice(std::string const & type);
		Ice& operator = (const Ice &obj);
		std::string const &getType()const;
		AMateria *clone() const;
		virtual void use(ICharacter& target);
		~Ice();
};

#endif