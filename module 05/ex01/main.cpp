/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:28:04 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/07 14:49:20 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form hello;
        Form hello1("test", 3, 10, 5);
        Bureaucrat obeject1("aristo", 13);

        obeject1.signForm(hello1);
        hello1.beSigned(obeject1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }    
    return (0);
}