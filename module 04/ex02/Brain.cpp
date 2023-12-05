/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:41:27 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/05 17:37:32 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    int i = -1;
    while (++i < 100)
        this->ideas[i] = "idea";
    std::cout << "default  Brain constractor called" << std::endl;
}

Brain::Brain(const Brain&obj)
{
    std::cout << "copy constractor Brain called" << std::endl;
    int i = -1;
    while (++i < 100)
        this->ideas[i] = obj.ideas[i];
}

Brain& Brain::operator= (const Brain &obj)
{
    std::cout << "copy assignement operator Brain called" << std::endl;
    int i = -1;
    if (this != &obj)
        while (++i < 100)
            this->ideas[i] = obj.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destractor called" << std::endl;
}