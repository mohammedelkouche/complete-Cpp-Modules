/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:40:14 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/03/06 20:06:48 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc > 2)
    {
        std::vector<int> v;
        std::deque<int> d;
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
            my_stream >> nbr;
            if (nbr > std::numeric_limits<int>:: max())
            {
                std::cout << "error: Number exceeds integer range" << std::endl;
                return (0);
            }
            my_stream.clear();
            v.push_back((int)nbr);
            d.push_back((int)nbr);
        }
        // clock_t start = clock();
        std::cout << "Before:   "; 
        for (size_t i = 0; i < v.size(); i++)
        {
            std::cout << v[i] << " ";
        }
        std::cout  << std::endl;
        clock_t start_v = clock();
        merge_algo_v(v, start_v);
        clock_t start_d = clock();
        merge_algo_d(d, start_d);
    }
    else
        std::cout << "ERROR" << std::endl;
    return (0);
}