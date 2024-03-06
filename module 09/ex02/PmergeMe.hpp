/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:40:18 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/03/05 10:39:56 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <limits>
#include <exception>
#include <sstream>
#include <deque>
#include <ctime>

void    merge_algo_v(std::vector<int> &v, clock_t start);
void    merge_algo_d(std::deque<int> &d, clock_t start);

#endif