/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:20:19 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/07 22:50:20 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria* materia[4];
    public  :
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &obj);
        MateriaSource& operator = (const MateriaSource &obj);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif