/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:27:06 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/06 15:27:45 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
    Array<int> wtv(void);
    std::cout << wtv << std::endl;
    Array<int> test(10);
    Array<int> oi = test;
    std::cout << test.size() << std::endl;
    std::cout << oi.size() << std::endl;
    std::cout << test[5] << std::endl;
    try
    {
        test[5] = 80;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << test[5] << std::endl;
    std::cout << oi[5] << std::endl;
}