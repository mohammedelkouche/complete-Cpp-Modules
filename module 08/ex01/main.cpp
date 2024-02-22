/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:57:15 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/22 16:56:49 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

// int main()
// {
    // try
    // {
    //     Span sp(4);
    //     sp.addNumber(20);
    //     sp.addNumber(2);
    //     sp.addNumber(4);
    //     sp.addNumber(1);
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    //     sp.addNumber(5);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

//     return(0);
// }

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}