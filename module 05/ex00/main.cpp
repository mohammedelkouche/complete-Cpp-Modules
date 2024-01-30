/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:28:04 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/30 11:26:16 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        // Bureaucrat object1("aristo", 0);
        Bureaucrat object1("aristo", 1);
        std::cout << object1 << std::endl;
        // Bureaucrat obj(object1);
        // Bureaucrat obj = object1;
        Bureaucrat obj ("hello", 3);
        obj = object1;
        std::cout << object1.getName() << std:: endl;
        std::cout << object1.getGrade() << std::endl;
        // std::cout << obj.getName() << std:: endl;
        // std::cout << obj.getGrade() << std::endl;

        // std::cout << object1 << std::endl;
        
        obj.decrementGrade();
        // Bureaucrat object("aristo", 130);
        // std::cout << object.getName() << std:: endl;
        // std::cout << object.getGrade() << std::endl;
        // object.incrementGrade();
        // Bureaucrat object2("aristo", 130);
        // object.incrementGrade();
        // std::cout << object2.getGrade() << std::endl;
        std::cout << "hello world " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}