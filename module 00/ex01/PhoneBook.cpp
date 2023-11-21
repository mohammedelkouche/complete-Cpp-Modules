/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:33:42 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/13 20:33:42 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	error_message()
{
	std::cout << "this field can't be empty" << std::endl;
}

PhoneBook::PhoneBook():index(0)
{}
PhoneBook::~PhoneBook()
{}

int whitespace(std::string str)
{
	int i;
	i = 0;

	while (str[i])
	{
		if (std::isspace(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	PhoneBook::Add_contact()
{
	Contact newcontact;
	std::string Fname, Lname, Nkname, Number, Secret;

	do{
		std::cout << "Entre the First Name : ";
		if (!std::getline(std::cin, Fname))
			exit(1);
		if (Fname.empty())
			error_message();
	} while (Fname.empty() || whitespace(Fname));
	newcontact.setFistName(Fname);
	do{
		std::cout << "Entre the Last Name : ";
		if (!std::getline(std::cin, Lname))
			exit(1);
		if (Lname.empty())
			error_message();
	} while (Lname.empty() || whitespace(Lname));
	newcontact.setLastName(Lname);
	do{
		std::cout << "Entre the NickName : ";
		if (!std::getline(std::cin, Nkname))
			exit(1);
		if (Nkname.empty())
			error_message();
	} while (Nkname.empty() || whitespace(Nkname));
	newcontact.setNickName(Nkname);
	do{
		std::cout << "Entre the PhoneNum : ";
		if (!std::getline(std::cin, Number))
			exit(1);
		if (Number.empty())
			error_message();
	} while (Number.empty() || whitespace(Number));
	newcontact.setPhoneNum(Number);
	do{
		std::cout << "Entre the DarkSecret : ";
		if (!std::getline(std::cin, Secret))
			exit(1);
		if (Secret.empty())
			error_message();
	} while (Secret.empty() || whitespace(Secret));
	newcontact.setDarkSecret(Secret);
	list[index % 8] = newcontact;
	index++;
}

std::string	truncated(std::string word)
{
	std::string	str;

	if (word.length() > 9)
	{
		str = word.substr(0, 9) + ".";
		return (str);
	}
	return (word);
}

int	check_num(std::string str)
{
	int	num;

	if (str.length() > 1 || !isdigit(str[0]))
		return(-1);
	num = std::atoi(str.c_str());
	return(num);
}

void	PhoneBook::Search_contact()
{
	int	id = 0;
	int number;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << '|' << std::setw(10) << "id" 
			<< '|' << std::setw(10) << "FirstName" 
			<< '|' << std::setw(10) << "LastName" 
			<< '|' << std::setw(10) << "NickName" 
			<< '|' << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (id < 8 && !list[id].getFirstName().empty())
	{
		std::cout << '|' << std::setw(10) << id << '|';
		std::cout << std::setw(10) << truncated(list[id].getFirstName())  << '|';
		std::cout << std::setw(10) << truncated(list[id].getLastName()) << '|';
		std::cout << std::setw(10) << truncated(list[id].getNickName()) << '|' << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		id++;
	}
	std::string identity;
	std::cout << "choise the index of the entry to display : " ;
	if (!std::getline(std::cin, identity))
		exit(1);
	number = check_num(identity);
	if (number >= 0 && number < index && number <=7)
	{
		std::cout << "FirstName : " << list[number].getFirstName() << std::endl;
		std::cout << "LastName : " << list[number].getLastName() << std::endl;
		std::cout << "NickName : " << list[number].getNickName() << std::endl;
		std::cout << "PhoneNum : " << list[number].getPhoneNum() << std::endl;
		std::cout << "DarkSecret : " << list[number].getDarkSecret() << std::endl;
	}
	else
		std::cout << "the index is out of range or wrong" << std::endl;
}

void	PhoneBook::Exit_contact()
{
	std::cout << "exit from PhoneBook program" << std::endl;
	exit(0);
}