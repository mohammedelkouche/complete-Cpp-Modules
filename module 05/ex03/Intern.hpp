/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:15:42 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/28 16:12:00 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class Intern
{
    public :
        Intern();
        Intern(const Intern &other);
        Intern& operator = (const Intern &other);
        ~Intern();
        AForm    *makeForm(std::string name, std::string target);
        class   formnotvalid : public std::exception
        {
            virtual const char* what() const throw();
        };
};

#endif