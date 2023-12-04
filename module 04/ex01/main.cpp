/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:30:51 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/12/04 17:36:34 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

void l()
{
    system ("leaks Polymorphism");
}

int main( void )
{
    atexit(l);
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    //-------------------- WrongAnimal ------------------/
    
    std::cout <<  std::endl;
    
    const WrongAnimal* k = new WrongAnimal();
    const WrongAnimal* z = new WrongCat();
    
    std::cout << k->getType() << " " << std::endl;
    std::cout << z->getType() << " " << std::endl;
    k->makeSound();
    z->makeSound();
    delete meta;
    delete j;
    delete i;
    delete z;
    delete k;

    return 0;
}