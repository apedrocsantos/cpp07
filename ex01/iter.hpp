/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:44:09 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/04 16:28:02 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T *address, size_t length, void (*function)(T const &))
{
    for (size_t i = 0; i < length; i++)
        (*function)(address[i]);
}

template <typename T>
void mult(T const &address)
{
    std::cout << address << "\n";
}

#endif