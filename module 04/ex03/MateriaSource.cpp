/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:02:17 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/09 22:57:22 by mel-kouc         ###   ########.fr       */
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
    for (int i = 0; i < 4;i++)
        materia[i] = NULL;
    *this = obj;
}

MateriaSource& MateriaSource::operator = (const MateriaSource &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 4;i++)
        {
            if(materia[i])
                delete materia[i];
            if(obj.materia[i])
                materia[i] = obj.materia[i]->clone();
            else
                materia[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria*mtr)
{
    int i = 0;
    if (!mtr)
        return ;
    while (i < 4)
    {
        if (materia[i] == NULL)
        {
            materia[i] = mtr;
            break;
        }
        i++;
    }
    if(i == 4)
        delete mtr;
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
    {
        if (materia[i])
            delete materia[i];
    }
}