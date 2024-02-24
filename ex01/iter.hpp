/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:44:09 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/24 11:05:15 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

void iter(int *address, size_t length, int function(int *))
{
    while (length--)
    {
        function(address);
        address++;
    }
}

int mult(int *address)
{
    return (*address * 2);
}

#endif