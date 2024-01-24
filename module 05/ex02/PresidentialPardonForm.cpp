/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:47:42 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/24 15:20:16 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Form",  25, 5)
{
    this->target = "default PresidentialPardonForm";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Form",  25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("Form", 72, 45)
{
    this->target = other.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        this->target = other.target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if (getFormGradeSign() && executor.getGrade() <= getFormGradeExe())
    {
        std::cout << "inform that" << target << "has benn pardoned by Zaphod Beeblebrox";
    }
    else
        throw AForm::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}