/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:30:51 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/09 18:23:19 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

void l()
{
	system ("leaks Polymorphism");
}

int main()
{
	// Character src;
	// src.equip(new Ice());
	// src.equip(new Ice());
	// src.equip(new Ice());
	// src.equip(new Ice());
	// Character lol;

	// lol = src;
	// lol.use(0, src);
	////
	atexit(l);
	Character a;
	Character b(a);
	
	// AMateria b(a);

	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// me->equip(tmp);
	
	// // tmp = src->createMateria("ice");
	// me->unequip(0);
	// me->unequip(1);
	// me->unequip(2);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(2, *bob);
	// me->use(3, *bob);
	// ICharacter* t = new Character("hello");
	// me->use(1, *t);
	// delete t;
	// delete bob;
	// delete me;
	// delete src;
}