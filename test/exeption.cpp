/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exeption.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:08:41 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/06 11:03:49 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class custom_exeption : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("custom exception ");
	}
};


int	main(void)
{
	std::string word = "four";
	try
	{
		std::cout << word.at(4) << std::endl;
		// throw std::runtime_error("problem in ...");
		throw custom_exeption();
	}
	catch(std::out_of_range& e)
	{
		std::cout << "Exeption 1: " << e.what() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "Exeption 2: " << e.what() << std::endl;
	}
	return (0);
}

