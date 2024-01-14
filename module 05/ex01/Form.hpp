/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:01:50 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/01/15 00:21:25 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.cpp"

class Form
{
    private :
        const std::string _name;
        bool        _sign;
        const int   _grade_sign;
        const int   _grade_exe;
    public :
        Form();
        Form(std::string name, bool sign, int grade_sign, int grad_exe);
        Form(const Form &other);
        Form& operator = (const Form &other);
        std::string getName()const;
        
        
        ~Form();
}

#endif