/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:28:04 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/28 22:56:09 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void l()
{
    system("leaks bureaucrat");
}

int main()
{
    try
    {
        atexit(l);
        // AForm hello;
        // AForm hello1("test", 10, 5);
        
        // // *************
        // Bureaucrat obeject1("aristo", 21);
        // ShrubberyCreationForm a("hello");
        // // RobotomyRequestForm q("efwf");
        // obeject1.signForm(a);
        // a.beSigned(obeject1);
        // a.execute(obeject1);
        // // *************
        

        // ********************
        // RobotomyRequestForm test("casa");
        // Bureaucrat obeject1("aristo", 21);
        // RobotomyRequestForm test;
        // test.execute(obeject1);

        // Intern b;
        // AForm *a = b.makeForm("ShrubberyCreation","test");
        
        // try {
        //     Intern someRandomIntern;
        //     AForm* rrf = someRandomIntern.makeForm("robotomy ", "Bender");
        //     // Do something with the created form, or delete it if necessary
        //     delete rrf;
        // } catch (const std::exception& e) {
        //     std::cerr << "Exception: " << e.what() << std::endl;
        // }
            // a->getFormName();
            
            // b.makeForm("hello", "test");
        
        
        // ********************

        
        // const int a = 20;
        // const int c = a;
        // const int *q = &a;
        // int *z;
        // z = const_cast <int*> (q);
        // *z = 6; // invalid 
        // std::cout << c << std::endl;
        // std::cout << a << std::endl;
        // std::cout << *z << std::endl;
        // const int b = 40;
        // b = const_cast <int> (a);
        // std::cout << b << std::endl;
        
        // obeject1.signForm(hello1);
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
        Bureaucrat obeject1("aristo", 21);
        Intern b;
        AForm *a = b.makeForm("Shrubbe","test");
        a->execute(obeject1);
        // delete a;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    // in catch can we use Bureaucrat::GradeTooHighException() in parametre
    return (0);
}