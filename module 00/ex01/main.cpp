/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:32:50 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/13 20:32:50 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void    program_guide(void)
{
	std::cout << std::endl << "|-------------------- POHNEBOOK  COMMAND ---------------------------|" << std::endl;
	std::cout << "|---------------  " << "ADD : ADD A NEW CONTACT " << "               -----------|" << std::endl;
	std::cout << "|---------------  " << "SEARCH : DISPLAY A SPECIFIC CONTACT " << "   -----------|" << std::endl;
	std::cout << "|---------------  " << "EXIT : EXIT FROME PROGRAMME " << "           -----------|" << std::endl;
	std::cout << "|-------------------------------------------------------------------|" << std::endl;
}

int main()
{
	PhoneBook   book;
	Contact		info;

	while (1337)
	{
		std::string command;
		program_guide();
		std::cout << "PhonBook > ";
		if (!std::getline(std::cin, command))
			exit(1);
		if (command == "ADD")
			book.Add_contact();
		else if (command == "SEARCH")
		    book.Search_contact();
		else if (command == "EXIT")
		    book.Exit_contact();
		else
			std::cout << "the command is not found" << std::endl;
	}
	return (0);
}