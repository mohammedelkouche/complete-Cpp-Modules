/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:18:36 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/25 20:26:52 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    std::cout << "------- list -----\n";
    
    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << list.front() << std::endl;
    list.pop_back();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    //[...]
    list.push_back(0);
    std::list<int>::iterator itl = list.begin();
    std::list<int>::iterator itle = list.end();
    ++itl;
    --itl;
    while (itl != itle)
    {
        std::cout << *itl << std::endl;
        ++itl;
    }
    
    // std::cout << "-------  -----\n";
    
    // MutantStack<int, std::list<int> > list;
    // list.push(5);
    // list.push(17);
    // std::cout << list.top() << std::endl;
    // list.pop();
    // std::cout << list.size() << std::endl;
    // list.push(3);
    // list.push(5);
    // list.push(737);
    // //[...]
    // list.push(0);
    // MutantStack<int, std::list<int> >::iterator itl = list.begin();
    // MutantStack<int, std::list<int> >::iterator itle = list.end();
    // ++itl;
    // --itl;
    // while (itl != itle)
    // {
    //     std::cout << *itl << std::endl;
    //     ++itl;
    // }
    return 0;
}