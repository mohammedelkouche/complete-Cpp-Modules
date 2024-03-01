/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:56:45 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/03/01 20:35:44 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// RPN::RPN()
// {
    
// }
// RPN::~RPN()
// {
    
// }

// RPN::RPN(const RPN &other)
// {
//     *this = other;
// }

// RPN& RPN::operator=(const RPN &other)
// {
//     if (this != &other)
//     {
        
//     }
//     return (*this);
// }

int is_operator(char op)
{
    char tab_opr[] = {'-', '+', '*', '/'};
    for (size_t i = 0; i < 4; i++)
    {
        if (op == tab_opr[i])
            return (1);
    }
    return (0);
}

int    check_argv(std::string argv)
{
    int digit_cout = 0;
    int operator_cout = 0;
    
    
    for (size_t i = 0; i < argv.length(); i++)
    {
        if (argv[i + 1] && isdigit(argv[i]) && isdigit(argv[i + 1]))
            return (0);
        else if (isdigit(argv[i]))
        {
            digit_cout++;
            continue;
        }
        else if (isspace(argv[i]))
        {
            continue;
        }
        else if (is_operator(argv[i]))
        {
            operator_cout++;
            continue;
        }
        else
            return (0);
    }
    if (digit_cout - operator_cout != 1)
        return (0);
    return (1);
}

float operation(int l, int r, char op)
{
    if (l == 0 && op == '/')
    {
        std::cout << "Error: Division by zero" << std::endl;
        exit(1);
    }
    switch (op)
    {
    case '+' :
        return r + l;
    case '-' :
        return r - l;
    case '*' :
        return r * l;
    case '/' :
        return r / l;
    default :
        return(0);
    }
}

void    Reverse_Polish_Notation(std::string argv)
{
    if (check_argv(argv))
    {
        std::stack <int> calc_stack;
        float res;
        for (size_t i = 0; i < argv.length(); i++)
        {
            if (isdigit(argv[i]))
            {
                calc_stack.push(argv[i] - '0');
                continue;
            }
            else if (isspace(argv[i]))
            {
                continue;
            }
            else
            {
                if (calc_stack.size() > 1)
                {
                    int left_nbr = calc_stack.top();
                    calc_stack.pop();
                    int right_nbr = calc_stack.top();
                    calc_stack.pop();
                    res = operation(left_nbr, right_nbr, argv[i]);
                    calc_stack.push(res);
                }
                else
                {
                    std::cout << "Error" << std::endl;
                    return ;
                }
                continue;
            }
        }
        std::cout << calc_stack.top() << std::endl;
    }
    else
        std::cout << "Error" << std::endl;
}

