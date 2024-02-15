/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:54:40 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/15 22:54:21 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base obj;
    // Base *ptr1;
    
    // Base *ptr;
    // ptr->generate();
    Base *ptr = new A;
    obj.generate();
    // ptr->identify();
    obj.identify(ptr);
    obj.identify(*ptr);

    
    // Base *ptr = generate();
    
    return (0);
}