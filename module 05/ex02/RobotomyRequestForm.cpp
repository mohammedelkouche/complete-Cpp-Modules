/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:07:15 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/07 16:07:25 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>   

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = "default RobotomyRequestForm";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = other.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        this->target = other.target;
        AForm::operator=(other);
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::cout << "Makes some drilling noises." << std::endl;
    std::srand(time(0));
    if (getFormGradeSign() && executor.getGrade() <= getFormGradeExe())
    {
        bool    succes;
        if (rand() % 2 == 0)
            succes = true;
        else
            succes = false;
        if (succes)
            std::cout  << target << " has been robotomized " << std::endl;
        else
            std::cout << "the robotomy failed. " << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}