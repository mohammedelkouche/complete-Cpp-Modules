/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:39:47 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/07 13:25:17 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat")
{
    std::cout << " Default constractor Bureaucrat called " << std:: endl;
    this->grade = 10;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
    std::cout << "parametrize constractor Bureaucrat called " << std::endl;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    std::cout << "Copy constructor called " << std::endl;
    this->grade = other.grade;
}

std::string Bureaucrat::getName() const
{
    std::cout << "getName member function called" << std::endl;
    return (name);
}

int Bureaucrat::getGrade() const
{
    std::cout << "getGrade member function called" << std::endl;
    return (grade);
}

const char*    Bureaucrat::GradeTooHighException::what() const throw()
{
    std::cout << "GradeTooHighException derived function of exeption base class called" << std::endl;
    return("highest grade");
}

const char*    Bureaucrat::GradeTooLowException::what() const throw()
{
    std::cout << "GradeTooLowException derived function of exeption base class called" << std::endl;
    return("lowest grade");
}

void    Bureaucrat::incrementGrade()
{
    std::cout << "incrementGrade member function called" << std::endl;
    if (grade > 1)
        grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}
void    Bureaucrat::decrementGrade()
{
    std::cout << "decrementGrade member function called" << std::endl;
    if (grade < 150)
        grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os , const Bureaucrat &other)
{
    os << other.getName() << " , Bureacrat grade " << other.getGrade() << std::endl;
    return (os);
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << getName() << " signed " << form.getFormName() << std::endl;
    }
    catch(const Form::GradeTooLowException& e)
    {
        std::cout << getName() <<  " couldn't sign " << form.getFormName() << 
        " because " << e.what() << std::endl;
    }
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &other)
{
    std::cout << "copy assignement operator called " << std::endl;
    if (this != &other)
    {
        const_cast<std::string&>(this->name) = other.name;
        this->grade = other.grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destractore Bureaucrat called" << std::endl;
}
