/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:46:08 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/13 22:18:02 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    // check this ./bureaucrat ''
    if (argc == 2)
        ScalarConverter::convert(argv[1]);
    else
        std::cout << "error in argument" << std ::endl;
        
    return(0);
}
