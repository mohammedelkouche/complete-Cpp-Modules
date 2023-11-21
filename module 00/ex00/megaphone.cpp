/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:01:11 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/11/20 14:01:11 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;
    std::string data;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (argv[i])
        {
            j = 0;
            data = argv[i];
            while (data[j])
            {
                if (data[j] >= 'a' && data[j] <= 'z')
                    std::cout << (char)toupper(data[j]);
                else
                    std::cout << data[j];
                j++;
            }
            i++;
        }
    }
    std::cout << std::endl;
    return (0);
}