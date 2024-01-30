/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:01:53 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/30 11:15:38 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default Form") ,_grade_sign(10) ,_grade_exe(40)
{
    std::cout << " Default constractor Form called " << std::endl;
    this->_sign_state = false;
}

Form::Form(const std::string name, bool sign, const int grade_sign, const int grad_exe) : _name(name), _sign_state(sign) ,_grade_sign(grade_sign), _grade_exe(grad_exe)
{
    
}
Form::Form(const Form &other) : _name(other._name), _sign_state(other._sign_state) ,_grade_sign(other._grade_sign), _grade_exe(other._grade_exe)
{
    
}

const char*    Form::GradeTooHighException::what() const throw()
{
    return("highest grade");
}

const char*    Form::GradeTooLowException::what() const throw()
{
    return("lowest grade");
}

std::string Form::getFormName() const
{
    return (_name);
}

int Form::getFormGradeSign() const
{
    return (_grade_sign);
}

int Form::getFormGradeExe() const
{
    return (_grade_exe);
}

bool Form::getFormSignstate() const
{
    return (_sign_state);
}

std::ostream& operator<< (std::ostream& os, const Form &other)
{
    os << "Form" << other.getFormName() << " Signed " << other.getFormSignstate()
     << " ,  grade to sign " << other.getFormGradeSign() <<
    " grade to execute " << other.getFormGradeExe() << std::endl;
    return (os);
}

void    Form::beSigned(Bureaucrat &sign)
{
    if (sign.getGrade() <= _grade_sign)
        _sign_state = true;
    else
        throw Form::GradeTooLowException();
}

Form& Form::operator = (const Form &other)
{
    if (this != &other)
    {
        const_cast<std::string&>(_name) = other._name;
        this->_sign_state = other._sign_state;
        const_cast<int&>(_grade_sign) = other._grade_sign;
        const_cast<int&>(_grade_exe) = other._grade_exe;
    }
    return (*this);
}

Form::~Form()
{
    std::cout << "Destractore Form called" << std::endl;
}

