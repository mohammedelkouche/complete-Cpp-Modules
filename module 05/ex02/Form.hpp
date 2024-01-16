/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:01:50 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/15 16:33:33 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
    private :
        const std::string _name;
        bool        _sign_state;
        const int   _grade_sign;
        const int   _grade_exe;
    public :
        Form();
        Form(const std::string name, bool sign, const int grade_sign, const int grad_exe);
        Form(const Form &other);
        Form& operator = (const Form &other);
        std::string getFormName()const;
        bool    getFormSignstate() const;
        int     getFormGradeSign() const;
        int     getFormGradeExe() const;
        class	GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
        void    beSigned(Bureaucrat &sign);
        ~Form();
};

std::ostream& operator<< (std::ostream& os, const Form &other); 

#endif