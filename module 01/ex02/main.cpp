/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:07:07 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/18 10:33:21 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "Address of 'str': " << &str << std::endl;
    std::cout << "Address of 'stringPTR': " << stringPTR << std::endl;
    std::cout << "Address of 'stringREF': " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "value of 'str': " << str << std::endl;
    std::cout << "value of 'stringPTR': " << *stringPTR << std::endl;
    std::cout << "value of 'stringREF': " << stringREF << std::endl;
    return (0);
}
