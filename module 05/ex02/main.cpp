/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:28:04 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/15 18:26:47 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form hello;
        Form hello1("test", 0, 10, 5);
        Bureaucrat obeject1("aristo", 13);

        obeject1.signForm(hello1);
        // hello1.beSigned(obeject1);
        
        // obeject1.decrementGrade();
        // Bureaucrat obeject("aristo", 130);
        // std::cout << obeject.getName() << std:: endl;
        // std::cout << obeject.getGrade() << std::endl;
        // obeject.incrementGrade();
        // Bureaucrat obeject2("aristo", 130);
        // obeject.incrementGrade();
        // std::cout << obeject2.getGrade() << std::endl;
        // std::cout << "hello world " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    // in catch can we use Bureaucrat::GradeTooHighException() in parametre
    
    return (0);
}