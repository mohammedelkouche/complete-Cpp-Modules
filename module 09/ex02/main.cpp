/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:40:14 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/03/02 23:59:39 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        std::vector<int> v;
        std::stringstream my_stream;
        double nbr;
        for (int i = 1; i < argc; i++)
        {
            int j = 0;
            for (; j < argv[i][j]; j++)
            {
                if (j == 0 && argv[i][j] == '+')
                    continue;
                else if (isdigit(argv[i][j]))
                    continue;
                else
                {
                    std::cout << "error" << std::endl;
                    return (0);
                }
            }
            my_stream.str(argv[i]);
            if (!(my_stream >> nbr))
            {
                std::cout << "failed" << std::endl;
                return (0); 
            }
            if (nbr > std::numeric_limits<int>:: max())
            {
                std::cout << "error: Number exceeds integer range" << std::endl;
                return (0);
            }
            std::cout << nbr << std::endl;
            my_stream.clear();
            v.push_back((int)nbr);
        }
        // std::cout << "size = " << v.size() << std::endl;
        
        merge_algo(v);
    }
    else
        std::cout << "ERROR" << std::endl;
    // while (++i < argc)
    // {
        // input(argv, argc);
        // std::cout << atoi(argv[i]) << std::endl;
    // }
    return (0);
}