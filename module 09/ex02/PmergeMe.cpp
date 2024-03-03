/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:40:16 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/03/04 00:11:09 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// bool comparePairs(const std::pair<int, int> &a, const std::pair<int, int> &b) {
//     return a.first < b.first;
// }

int jacobsthal(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

void	divide_pair(std::vector<std::pair <int , int> > &v_pairs, int &single, clock_t start)
{
	std::vector <int> main_v;
	std::vector <int> vect;
	std::vector<std::pair <int , int > >::iterator it = v_pairs.begin();
	main_v.push_back(it->second);
	for (; it != v_pairs.end(); ++it)
	{
		main_v.push_back(it->first);
		vect.push_back(it->second);
	}
	// std::cout << "main" << std::endl;
	// for (size_t i = 0; i < v_pairs.size(); i++)
    // {
    //     std::cout << main_v[i] << std::endl;
    // }
	// std::cout << "vect" << std::endl;
	// for (size_t i = 0; i < vect.size(); i++)
    // {
    //     std::cout << vect[i] << std::endl;
    // }
	int size = vect.size();
	int j = 3;
	int jcb_nbr = 0;
	int push_break = 1;
	std::vector<int>::iterator pos;
	while (1)
	{
		jcb_nbr = jacobsthal(j);
		int save_jcb = jcb_nbr;
		while (jcb_nbr > push_break)
		{
			if (jcb_nbr <= size)
			{
				pos = std::lower_bound(main_v.begin(), main_v.end(), vect[jcb_nbr - 1]);
				main_v.insert(pos, vect[jcb_nbr - 1]);
			}
			jcb_nbr--;
		}
		push_break = save_jcb;
		if (save_jcb >= size)
			break ;
		j++;
	}
	if (single != -1)
	{
		pos = std::lower_bound(main_v.begin(), main_v.end(), single);
		main_v.insert(pos, single);
	}
	// for (size_t i = 0; i < main_v.size(); i++)
	// {
	// 	std::cout << "main_v[i] = " << main_v[i] << std::endl;
	// }
	std::cout << "After:   ";
	for (size_t i = 0; i < main_v.size(); i++)
	{
		std::cout << main_v[i] << " ";
	}
	std::cout  << std::endl;
	clock_t end = clock();
	double time_elapsed = (double)(end - start) / CLOCKS_PER_SEC * 1000000; // in microseconds
	std::cout << "Time to process a range of " << main_v.size() << " elements with std::sort: " << time_elapsed << " us" << std::endl;

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

void    merge_algo_v(std::vector<int> &v, clock_t start)
{
	std::vector<std::pair<int, int> > v_pairs;
	int single = -1;
	for (size_t i = 0; i < v.size(); i += 2)
	{
		if (i + 1 < v.size())
        {
            if (v[i] < v[i + 1])
                v_pairs.push_back(std::make_pair(v[i + 1], v[i])); // Sort the pair
            else
                v_pairs.push_back(std::make_pair(v[i], v[i + 1])); // Pair is already sorted
        }
		else
			single = *(v.end() - 1);
	}
	// std::cout << "single = " << single << std::endl;
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
				swap_pair(*it, *next);
		}
	}
	
	// display pair
	// for (size_t i = 0; i < v_pairs.size(); ++i)
    // {
    //     std::cout << "(" << v_pairs[i].first << ", ";
    //     if (v_pairs[i].second)
    //         std::cout << v_pairs[i].second << ")";
    //     if (i < v_pairs.size() - 1)
    //         std::cout << ", ";
    // }
	divide_pair(v_pairs, single, start);
}

// void    merge_algo_v(std::vector<int> &v)
// {
// 	std::vector<std::pair<int, int> > v_pairs;
// 	int single = -1;
// 	for (size_t i = 0; i < v.size(); i += 2)
// 	{
// 		if (i + 1 < v.size())
//         {
//             if (v[i] < v[i + 1])
//                 v_pairs.push_back(std::make_pair(v[i + 1], v[i])); // Sort the pair
//             else
//                 v_pairs.push_back(std::make_pair(v[i], v[i + 1])); // Pair is already sorted
//         }
// 		else
// 			single = *(v.end() - 1);
// 	}
// 	std::cout << "single = " << single << std::endl;
// 	// std::sort(v_pairs.begin(), v_pairs.end(), comparePairs);
// 	// swap the pair 
// 	std::vector<std::pair <int , int > >::iterator it = v_pairs.begin();
// 	for (; it != v_pairs.end(); ++it)
// 	{
// 		std::vector<std::pair <int , int > >::iterator next = it;
// 		++next;
// 		for (; next != v_pairs.end(); ++next)
// 		{
// 			if (it->first > next->first)
// 				swap_pair(*it, *next);
// 		}
// 	}
	
// 	// display pair
// 	for (size_t i = 0; i < v_pairs.size(); ++i)
//     {
//         std::cout << "(" << v_pairs[i].first << ", ";
//         if (v_pairs[i].second)
//             std::cout << v_pairs[i].second << ")";
//         if (i < v_pairs.size() - 1)
//             std::cout << ", ";
//     }
// 	divide_pair(v_pairs, single);
// }