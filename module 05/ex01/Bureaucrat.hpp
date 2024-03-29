/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:01:18 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/27 13:21:02 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class   Bureaucrat
{
	private :
		const std::string	name;
		int					grade;
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat& operator = (const Bureaucrat &other);
		std::string getName() const;
		int	getGrade() const;
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
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form &form);
		~Bureaucrat();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &other);

#endif