/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:33:18 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/13 20:33:18 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFistName(std::string fname)
{
	FirstName = fname;
}
void	Contact::setLastName(std::string Lname)
{
	LastName = Lname;
}
void	Contact::setNickName(std::string Nkname)
{
	NickName = Nkname;
}
void	Contact::setPhoneNum(std::string Number)
{
	PhoneNum = Number;
}
void	Contact::setDarkSecret(std::string Secret)
{
	DarkSecret = Secret;
}

std::string	Contact::getFirstName()
{
	return FirstName;
}
std::string	Contact::getLastName()
{
	return LastName;
}
std::string	Contact::getNickName()
{
	return NickName;
}
std::string	Contact::getPhoneNum()
{
	return PhoneNum;
}
std::string	Contact::getDarkSecret()
{
	return DarkSecret;
}
