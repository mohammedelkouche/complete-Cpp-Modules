/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:32:14 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/15 18:14:22 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer()
{
    
}
Serializer::~Serializer()
{
    
}

Serializer::Serializer(const Serializer &other)
{
    *this = other;
}

Serializer& Serializer::operator= (const Serializer &other)
{
    if (this != &other)
    {
        
    }
    return(*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t> (ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*> (raw));
}