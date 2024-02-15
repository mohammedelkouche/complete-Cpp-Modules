/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:32:12 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/15 18:30:49 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data data;
    data.value = 1337;
    uintptr_t serializedPtr = Serializer::serialize(&data);
    Data *deserializedPtr = Serializer::deserialize(serializedPtr);
    if (deserializedPtr == &data)
    {
        std::cout << " Original value " <<std::endl;
    }
    else
        std::cout << " not equal " <<std::endl;
    return (0);
}