/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:33:50 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/13 20:33:50 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include "Contact.hpp"

class PhoneBook
{
	private	:
		Contact list[8];
		int	index;

	public	:
		PhoneBook();
		~PhoneBook();
		void	Add_contact();
		void	Search_contact();
		void	Exit_contact();
};

#endif