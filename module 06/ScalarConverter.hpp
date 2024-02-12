/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:04:47 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/12 18:13:18 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>

class ScalarConverter
{
    private :
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
    public :
        ScalarConverter& operator = (const ScalarConverter &other);
        ~ScalarConverter();
        static   void convert(std::string str);
};

#endif