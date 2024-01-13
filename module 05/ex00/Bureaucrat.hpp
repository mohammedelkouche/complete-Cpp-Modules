/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:01:18 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/13 22:31:31 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT.HPP
#define BUREAUCRAT.HPP

#include <iostream>

class   Bureaucrat
{
	const std::string	name;
	int					grade;
	public :
		Bureaucrat();
		std::string getName() const;
		getGrade();
		GradeTooHighException();
		GradeTooLowException();
		~Bureaucrat();
};

#endif