/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:44:09 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/22 21:25:29 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T, typename F>
void iter(T *address, size_t length, F function)
{
    for (size_t i = 0; i < length; i++)
        function(address[i]);
}

template <typename T>
void display(T const &address)
{
    std::cout << address << "\n";
}

#endif