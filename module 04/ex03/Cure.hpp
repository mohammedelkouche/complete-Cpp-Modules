/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:13:43 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/07 23:02:52 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class   Cure : public AMateria
{
 	public	:
		Cure();
		Cure(const Cure &obj);
		Cure& operator = (const Cure &obj);
		std::string const &getType()const;
		AMateria *clone() const;
		virtual void use(ICharacter& target);
		~Cure();
};

#endif