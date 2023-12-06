/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:13:43 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/06 23:23:55 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class   Cure : public AMateria
{
	protected	:
		std::string type;
 	public	:
		Cure();
		Cure(const Cure &obj);
		Cure(std::string const & type);
		Cure& operator = (const Cure &obj);
		std::string const &getType()const;
		AMateria *clone() const;
		// virtual void use(ICharacter& target);
		~Cure();
};

#endif