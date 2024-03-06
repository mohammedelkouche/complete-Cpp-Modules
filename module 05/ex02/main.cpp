/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:28:04 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/03/05 11:12:29 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    try
    {   
        // // *************
        Bureaucrat obeject1("aristo", 18);
        ShrubberyCreationForm a("hello");
        obeject1.signForm(a);
        a.beSigned(obeject1);
        a.execute(obeject1);
        // ********************
        
        Bureaucrat obeject1("aristo", 21);
        RobotomyRequestForm test;
        test.execute(obeject1);

        // ********************

        Bureaucrat bureaucrat1("aristo", 2);
        PresidentialPardonForm president("president1");
        bureaucrat1.signForm(president);
        president.beSigned(bureaucrat1);
        president.execute(bureaucrat1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }    
    return (0);
}