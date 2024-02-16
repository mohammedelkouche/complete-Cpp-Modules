/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:08:42 by mel-kouc          #+#    #+#             */
/*   Updated: 2024/02/16 15:53:08 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>

class Base
{
    public :
        Base();
        virtual ~Base();
        Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
};

#endif