/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:38:03 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/04 22:43:15 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	// Brain* brain;
    std::string ideas[100];
	public :
		Brain();
		Brain(const Brain&obj);
		Brain& operator = (const Brain &obj);
		// std::string getType();
		void makeSound() const;
		~Brain();
};

#endif