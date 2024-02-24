/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:57:59 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/23 14:43:24 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int intarr[]  = {1,2,3,4,5,6};
    double doublearr[] = {1.3,2.5,3.1,4.4,5.8,6.2};
    char chararr[]  = {'a', 'b' ,'c' ,'d' ,'e', 'f'};
    
    std::cout << "Printing intArray: " << std::endl;
    int lenght = sizeof(intarr) / sizeof(int);
     std::cout << sizeof(intarr) << std::endl;
     std::cout << sizeof(int) << std::endl;
    iter(intarr, lenght, print_elelment<int>);
    std::cout << "Printing doubleArray: " << std::endl;
    lenght = sizeof(doublearr) / sizeof(double);
    iter(doublearr, lenght, print_elelment<double>);
    std::cout << "Printing charArray: " << std::endl;
    lenght = sizeof(chararr) / sizeof(char);
    std::cout << lenght << std::endl;
    iter(chararr, 6, print_elelment<char>);
    return 0;
}
