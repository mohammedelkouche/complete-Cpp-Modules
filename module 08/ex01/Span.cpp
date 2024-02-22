/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:21:11 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/22 16:24:09 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    N = 0;
}

Span::Span(unsigned int n)
{
    N = n;
}
Span::Span(const Span &other)
{
    *this = other;
}

Span& Span::operator=(const Span &other)
{
    if (this != &other)
    {
        N  = other.N;
        vec = other.vec;
    }
    return (*this);
}

Span::~Span()
{
    
}
void    Span::addNumber(int nbr)
{
    if (vec.size() >= N)
        throw std::out_of_range("can't add number the vector is full");
    else
        vec.push_back(nbr);
}


int    Span::longestSpan()
{
    if (vec.size() <= 1)
        throw std::out_of_range("not enough number stored");
    std::vector<int>tmpv;
    tmpv = vec;
    std::sort(tmpv.begin(), tmpv.end());
    return(tmpv.back() -  tmpv.front());
}

int    Span::shortestSpan()
{
    if (vec.size() <= 1)
        throw std::out_of_range("not enough number stored");
    std::vector<int>tmpv;
    int shortvalue = std::numeric_limits<int>::max();
    tmpv = vec;
    std::sort(tmpv.begin(), tmpv.end());
    for (size_t i = 1; i < tmpv.size(); i++)
    {
        int dif = tmpv[i] - tmpv[i - 1];
        if (dif < shortvalue)
            shortvalue = dif;
    }
    return(shortvalue);
}
