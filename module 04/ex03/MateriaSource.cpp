/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:02:17 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/08 17:40:30 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4;i++)
        materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    
    *this = obj;
}


MateriaSource& MateriaSource::operator = (const MateriaSource &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 4;i++)
            materia[i] = obj.materia[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria*mtr)
{
    if (!mtr)
        return ;
    for (int i = 0; i < 4 ; i++)
    {
        if (materia[i] == NULL)
        {
            materia[i] = mtr;
            break;
        }
    }
    //ila kan 3amer delete mtr
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4 ; i++)
    {
        if (materia[i] && materia[i]->getType() == type)
            return(materia[i]->clone());
    }
    // the materia doesn't exist
    return NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4;i++)
         if (materia[i])
             delete materia[i];
}