/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:54:40 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/17 17:05:54 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base obj;

    Base *ptr =  obj.generate();
    obj.identify(ptr);
    obj.identify(*ptr);
    float number2 = 10;

    std::cout << std::fixed << number2 << std::endl; 
    return (0);
}