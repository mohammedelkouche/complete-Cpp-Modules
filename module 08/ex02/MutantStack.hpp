/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:18:34 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/25 00:18:16 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T , typename  Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
    private:
        /* data */
    public:
    MutantStack::MutantStack(/* args */)
    {
    }
    MutantStack::MutantStack(const MutantStack &other)
    {
        *this = other;
    }
    MutantStack& MutantStack::operator = (const MutantStack &other)
    {
        
    }

    MutantStack::~MutantStack()
    {
    };
        // MutantStack();
        // MutantStack(const MutantStack &other);
        // MutantStack& operator = (const MutantStack &other);
        // ~MutantStack();
        typedef typename std::stack::container_type::iterator it;
        

};


#endif