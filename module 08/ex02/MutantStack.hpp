/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:18:34 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/26 11:11:36 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T , typename  Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
    typedef typename std::stack<T, Container>::container_type::iterator iterator;
    MutantStack()
    {
    }
    MutantStack(const MutantStack &other)
    {
        *this = other;
    }
    MutantStack& operator = (const MutantStack &other)
    {
        if (this != &other)
        {
            this->c = other.c;
        }
        return (*this);
    }
    
    iterator begin()
    {
        return (this->c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }

    ~MutantStack()
    {
    };
};


#endif