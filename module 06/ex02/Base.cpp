/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:08:40 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/16 16:39:08 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>
#include <ctime> 

Base::Base()
{}

Base::~Base()
{}

Base* Base::generate(void)
{
    int nbr_instance;
    std::srand(time(0));
    nbr_instance = rand() % 3;
    switch (nbr_instance)
    {
        case 0 :
            return new A();
        case 1 :
            return (new B);
        case 2 :
            return (new C);
    }
    return (NULL);
}

void Base::identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << " A " << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << " B " << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << " C " << std::endl;
}

void Base::identify(Base& p)
{
    try
    {
        Base& a = dynamic_cast <A &>(p);
        std::cout << &a << " A " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << " failed to cast " << std::endl;
    }
    try
    {
        Base& b = dynamic_cast <B &>(p);
        std::cout  << &b<< " B " << std::endl;
    }
    catch(const std::exception& e)
    {
       std::cout << " failed to cast " << std::endl;
    }
    try
    {
        Base& c = dynamic_cast <C &>(p);
        std::cout  << &c << " C " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << " failed to cast " << std::endl;
    }
}

