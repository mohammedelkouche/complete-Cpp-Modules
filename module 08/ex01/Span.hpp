/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 23:41:56 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/22 18:21:24 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <limits>

class   Span
{
    private :
        unsigned int  N;
        std::vector<int> vec;
    public :
        Span();
        Span(unsigned int n);
        Span(const Span &other);
        Span& operator = (const Span &other);
        ~Span();
        void    addNumber(int nbr);
        int    shortestSpan();
        int    longestSpan();
        
};

#endif