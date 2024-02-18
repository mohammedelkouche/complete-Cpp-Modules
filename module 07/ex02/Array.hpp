/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:50:02 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/18 22:49:31 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    private :
        T   *array;
        unsigned int n;
    public :
        Array();
        Array(unsigned int  n);
        Array(const Array <T>& other);
        Array<T>& operator = (const Array <T>& other);
        Array<T>& operator[] (unsigned int index);
        ~Array();
        
};
template <typename T>
Array<T>::Array()
{
    
}
template <typename T>
Array<T>::~Array()
{
    
}

#endif