/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:24:08 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/08 19:08:47 by mel-kouc         ###   ########.fr       */
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
        inventory[i] = obj.inventory[i]->clone();
}


Character& Character::operator = (const Character &obj)
{
    this->name = obj.name; 
    if (this != &obj)
    {
         for (int i =0; i < 4 ; i++)
         {
            if (inventory[i])
            {
                delete inventory[i];
                inventory[i] = NULL;     
            }
        }
        for (int i = 0; i < 4 ; i++)
            inventory[i] = obj.inventory[i]->clone();
    }
    return *this;
}

std::string const & Character::getName()const
{
    return(name);
}

// add Amateria in first empty element
void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
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
        //you should handle leaks
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
        if (inventory[i])
            delete inventory[i];
}