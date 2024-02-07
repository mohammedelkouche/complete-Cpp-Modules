/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:06:53 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/07 20:23:07 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class Bureaucrat;

class AForm
{
	private :
		const std::string _name;
		bool        _sign_state;
		const int   _grade_sign;
		const int   _grade_exe;
	public :
		AForm();
		AForm(const std::string name, const int grade_sign, const int grad_exe);
		AForm(const AForm &other);
		AForm& operator = (const AForm &other);
		std::string getFormName()const;
		bool    getFormSignstate() const;
		int     getFormGradeSign() const;
		int     getFormGradeExe() const;
		class	GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		void    beSigned(Bureaucrat &sign);
		virtual void execute(Bureaucrat const & executor) const = 0;
		virtual ~AForm();
};

std::ostream& operator<< (std::ostream& os, const AForm &other);

#endif