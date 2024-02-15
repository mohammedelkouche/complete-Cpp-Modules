/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:04:47 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/14 15:28:23 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <iomanip>

class ScalarConverter
{
    private :
        ScalarConverter();
    public :
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter& operator = (const ScalarConverter &other);
        ~ScalarConverter();
        static   void convert(std::string str);
};

#endif