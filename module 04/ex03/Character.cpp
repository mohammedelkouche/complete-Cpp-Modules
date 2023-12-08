/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:24:08 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/07 23:12:17 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character()
{
    name = "character";
    for (int i = 0; i < 4;i++)
        inventory[i] = NULL;
}
Character::Character(std::string _name)
{
    name = _name;
    for (int i = 0; i < 4;i++)
        inventory[i] = NULL;
}


Character::Character(const Character &obj)
{
    
    name = obj.getName();
    for (int i = 0; i < 4;i++)
        inventory[i] = NULL;
}


Character& Character::operator = (const Character &obj)
{
    (void)obj;
    return *this;
}

std::string const & Character::getName()const
{
    return(name);
}

// add Amateria in first empty element
void Character::equip(AMateria* m)
{
    std::cout << m->getType() << " equip" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if(inventory[i] == NULL)
        {
            inventory[i] = m;
                break;
        }
    }
    //ila kan 3amer delete m
}
// remove the index in array 
void Character::unequip(int idx)
{
    if(idx >= 0 && idx <= 3)
    {
        if (inventory[idx] != NULL)
        {
            delete inventory[idx];
            inventory[idx] = NULL;
            return ;
        }
        //you should handle leaks you have to ask someone or came up with an idea how to do so
    }
}
//use the index that have type of target
void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx <= 3 && inventory[idx])
        inventory[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < 4;i++)
        delete inventory[i];
        // if (inventory[i])
        //     delete inventory[i];
}