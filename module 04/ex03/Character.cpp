/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:24:08 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/09 22:59:08 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character()
{
    name = "character";
    for (int i = 0; i < 4;i++)
        inventory[i] = NULL;
    index = 0;
    // for (int i = 0; i < 1000;i++)
    //     handler_array[i] = NULL;
}
Character::Character(std::string _name)
{
    name = _name;
    for (int i = 0; i < 4;i++)
        inventory[i] = NULL;
    index = 0;
}


Character::Character(const Character &obj)
{
    for (int i = 0; i < 4;i++)
        inventory[i] = NULL;
    *this = obj;
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
        {
            if(obj.inventory[i])
                inventory[i] = obj.inventory[i]->clone();
        }
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
    int i = 0;
    while (i < 4)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
                break;
        }
        i++;
    }
    if(i == 4)
        delete m;
}
void Character::unequip(int idx) 
{
    if(idx >= 0 && idx <= 3 && index < 1000)
    {
        if (inventory[idx] != NULL)
        {
            handler_array[index] = inventory[idx];
            index++;
            inventory[idx] = NULL;
            return ;
        }
    }
    else if (index >= 1000)
        std::cout << "you riched the limit of uniquip or invalid index" << std::endl;
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
    for (int j = 0; j < index;j++)
        delete handler_array[j];
}