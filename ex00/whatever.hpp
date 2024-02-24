/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:29:22 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/23 18:40:41 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& a, T& b)
{
    T c = a;
    a = b;
    b = c;
}

template<typename T>
T& min(T& a, T& b)
{
    return (a < b ? a : b);
}

template<typename T>
T& max(T& a, T& b)
{
    return (a > b ? a : b);
}
#endif