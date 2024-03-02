/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:40:16 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/03/02 23:49:57 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// bool comparePairs(const std::pair<int, int> &a, const std::pair<int, int> &b) {
//     return a.first < b.first;
// }

void	divide_pair(std::vector<std::pair <int , int> > &v_pairs)
{
    std::vector <int> main_v;
	std::vector <int> vect;
	std::cout << "hello" << std::endl;
	std::vector<std::pair <int , int > >::iterator it = v_pairs.begin();
	main_v.push_back(it->second);
	for (; it != v_pairs.end(); ++it)
	{
		main_v.push_back(it->first);
		vect.push_back(it->second);
	}
	// test to push
	// std::vector<int>::iterator it_v = vect.begin();
	// main_v.push_back(*it_v);
	
	// std::vector<std::pair <int , int > >::iterator it = v_pairs.begin();
	// for (; it != v_pairs.end(); ++it)
	// {
	// 	std::cout <<  <<std::endl;
	// }
	
	std::cout << "main" << std::endl;
	for (size_t i = 0; i < v_pairs.size(); i++)
    {
        std::cout << main_v[i] << std::endl;
    }
	std::cout << "vect" << std::endl;
	for (size_t i = 0; i < vect.size(); i++)
    {
        std::cout << vect[i] << std::endl;
    }
	
	

	
	// for (size_t i = 0; i < v_pairs.size(); ++i)
    // {
    //     std::cout << "(" << v_pairs[i].first << ", ";
    //     // if (v_pairs[i].second != -1)
    //     if (v_pairs[i].second)
    //         std::cout << v_pairs[i].second << ")";
    //     // else
    //     //     std::cout << "NoPair)";
    //     if (i < v_pairs.size() - 1)
    //         std::cout << ", ";
    // }
}

void	swap_pair(std::pair<int, int> &right, std::pair<int, int> &left)
{
	std::pair<int , int> tmp = right;
	right = left;
	left = tmp;
}

void    merge_algo(std::vector<int> &v)
{
    // std::vector <int> left_v;
    // std::vector <int> right_v;
	
	// for (size_t i = 0; i < v.size(); i++)
	// {
	// 	if (i <= v.size() / 2)
	// 		right_v.push_back(v[i]);
	// 	else
	// 		left_v.push_back(v[i]);
	// }
	// std::cout << "size right_v = " << right_v.size() << std::endl;
	// std::cout << "size left_v = " << left_v.size() << std::endl;
	std::vector<std::pair<int, int> > v_pairs;
	for (size_t i = 0; i < v.size(); i += 2)
	{
		if (i + 1 < v.size())
        {
            if (v[i] < v[i + 1])
                v_pairs.push_back(std::make_pair(v[i + 1], v[i])); // Sort the pair
            else
                v_pairs.push_back(std::make_pair(v[i], v[i + 1])); // Pair is already sorted
        }
		// else
        // {
        //     // Handle the case when there's an odd number of elements in the vector
        //     v_pairs.push_back(std::make_pair(v[i], -1)); // -1 indicates a missing pair element
        // }	
	}
	// std::sort(v_pairs.begin(), v_pairs.end(), comparePairs);
	// swap the pair 
	std::vector<std::pair <int , int > >::iterator it = v_pairs.begin();
	for (; it != v_pairs.end(); ++it)
	{
		std::vector<std::pair <int , int > >::iterator next = it;
		++next;
		for (; next != v_pairs.end(); ++next)
		{
			if (it->first > next->first)
			{
				swap_pair(*it, *next);
			}
		}
	}
	
	// display pair
	for (size_t i = 0; i < v_pairs.size(); ++i)
    {
        std::cout << "(" << v_pairs[i].first << ", ";
        // if (v_pairs[i].second != -1)
        if (v_pairs[i].second)
            std::cout << v_pairs[i].second << ")";
        // else
        //     std::cout << "NoPair)";
        if (i < v_pairs.size() - 1)
            std::cout << ", ";
    }
	divide_pair(v_pairs);
}