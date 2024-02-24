/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:50:02 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/21 15:08:40 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private :
        T   *array;
        unsigned int sizearray;
    public :
        Array();
        Array(unsigned int  n);
        Array(const Array <T>& other);
        Array<T>& operator = (const Array <T>& other);
        const T& operator[] (unsigned int index) const;
        T& operator[](unsigned int index);
        unsigned int size()const;
        ~Array();
        
};

template <typename T>
Array<T>::Array()
{
    sizearray = 0;
    array = new T[sizearray];
}
template <typename T>
Array<T>::Array(unsigned int n)
{
    array = new T[n];
    sizearray = n;
    for (unsigned int i = 0; i < n; i++)
        array[i] = 0;
}

template <typename T>
Array<T>::Array(const Array <T>& other)
{
    this->sizearray = other.sizearray;
    array = new T[sizearray];
    for (unsigned int i = 0; i < sizearray; i++)
        array[i] = other.array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array <T>& other)
{
    if (this != &other)
    {
        delete[] array;
        sizearray = other.sizearray;
        array = new T[sizearray];
        for (unsigned int i = 0; i < sizearray; i++)
            array[i] = other.array[i];
    }
    return (*this);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= sizearray)
        throw std::out_of_range("Index is out of bounds");
    return array[index];
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= sizearray)
        throw std::out_of_range("Index is out of bounds");
    return array[index];
}

template <typename T>
unsigned int Array<T>::size()const
{   
    return (sizearray);
}

template <typename T>
Array<T>::~Array()
{
    delete [] array;
}

#endif