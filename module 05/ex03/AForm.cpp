/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:07:03 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/28 16:43:20 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default AForm") ,_grade_sign(10) ,_grade_exe(40)
{
    std::cout << " Default constractor Form called " << std::endl;
    this->_sign_state = false;
}

AForm::AForm(const std::string name, const int grade_sign, const int grad_exe) : _name(name) ,_grade_sign(grade_sign), _grade_exe(grad_exe)
{
    this->_sign_state = false;
}
AForm::AForm(const AForm &other) : _name(other._name) ,_grade_sign(other._grade_sign), _grade_exe(other._grade_exe)
{
    this->_sign_state = other._sign_state;
}

const char*    AForm::GradeTooHighException::what() const throw()
{
    return("highest grade");
}

const char*    AForm::GradeTooLowException::what() const throw()
{
    return("lowest grade");
}

std::string AForm::getFormName() const
{
    return (_name);
}

int AForm::getFormGradeSign() const
{
    return (_grade_sign);
}

int AForm::getFormGradeExe() const
{
    return (_grade_exe);
}

bool AForm::getFormSignstate() const
{
    return (_sign_state);
}

std::ostream& operator<< (std::ostream& os, const AForm &other)
{
    os << "AForm" << other.getFormName() << " Signed " << other.getFormSignstate()
     << " ,  grade to sign " << other.getFormGradeSign() <<
    " grade to execute " << other.getFormGradeExe() << std::endl;
    return (os);
}

void    AForm::beSigned(Bureaucrat &sign)
{
    if (sign.getGrade() <= _grade_sign)
        _sign_state = true;
    else
        throw AForm::GradeTooLowException();
}

AForm& AForm::operator = (const AForm &other)
{
    if (this != &other)
    {
        const_cast<std::string&>(_name) = other._name;
        const_cast<bool&>(_sign_state) = other._sign_state;
        // this->_sign_state = other._sign_state;
        const_cast<int&>(_grade_sign) = other._grade_sign;
        const_cast<int&>(_grade_exe) = other._grade_exe;
    }
    return (*this);
}

AForm::~AForm()
{
    std::cout << "Destractore AForm called" << std::endl;
}

