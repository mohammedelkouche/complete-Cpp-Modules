/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:15:45 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/07 22:28:50 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    
}
Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern& Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}

const char* Intern::formnotvalid::what() const throw()
{
    return("no form was created");
}

Intern::~Intern()
{
    
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string forms[3] = {"ShrubberyCreation","PresidentialPardon","RobotomyRequest"};
    int i = 0;
    for(; i < 3; i++)
        if(!name.compare(forms[i]))
            break;
    switch (i)
    {
        case 0 :
            return(new ShrubberyCreationForm(target));
            // break;
        case 1 :
            return(new PresidentialPardonForm(target));
            // break;
        case 2 :
            return(new RobotomyRequestForm(target));
            // break;
        default :
            throw Intern::formnotvalid();
            break;
    }
    return (NULL);
}