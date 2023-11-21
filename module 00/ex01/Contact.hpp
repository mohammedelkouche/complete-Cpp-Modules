/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:33:08 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/13 20:33:08 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private	:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNum;
		std::string DarkSecret;
	public	:
		void	setFistName(std::string fname);
		void	setLastName(std::string Lname);
		void	setNickName(std::string Nkname);
		void	setPhoneNum(std::string Number);
		void	setDarkSecret(std::string Secret);

		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNum();
		std::string getDarkSecret();
};

#endif