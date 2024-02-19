/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:57:59 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/19 16:38:34 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int intarr[]  = {1,2,3,4,5,6};
    double doublearr[] = {1.3,2.5,3.1,4.4,5.8,6.2};
    char chararr[]  = {'a', 'b' ,'c' ,'d' ,'e', 'f'};
    
    std::cout << "Printing intArray: " << std::endl;
    iter(intarr, 6, print_elelment<int>);
    std::cout << "Printing doubleArray: " << std::endl;
    iter(doublearr, 6, print_elelment<double>);
    std::cout << "Printing charArray: " << std::endl;
    iter(chararr, 6, print_elelment<char>);
    return 0;
}