/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:56:47 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/03/01 15:20:43 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//first operand second operand
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Reverse_Polish_Notation(argv[1]);
    }
    else
        std::cout << "ERROR" << std::endl;
    return (0);
}