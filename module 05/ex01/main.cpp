/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:28:04 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/14 23:45:43 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obeject1("aristo", 0);
        obeject1.decrementGrade();
        Bureaucrat obeject("aristo", 130);
        std::cout << obeject.getName() << std:: endl;
        std::cout << obeject.getGrade() << std::endl;
        obeject.incrementGrade();
        Bureaucrat obeject2("aristo", 130);
        obeject.incrementGrade();
        std::cout << obeject2.getGrade() << std::endl;
        std::cout << "hello world " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    // in catch can we use Bureaucrat::GradeTooHighException() in parametre
    
    return (0);
}