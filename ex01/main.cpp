/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:54:53 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/23 09:16:45 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
   std::cout << "-------- ints ---------\n";
   int array[5] = {1, 2, 3, 4, 5};
   iter(array, 5, display<int>);
   std::cout << "-------- floats ---------\n";
   float array2[5] = {1.1f, 2.2f, 3, 4.4f, 55.5f};
   iter(array2, 5, display<float>);
   std::cout << "-------- doubles ---------\n";
   double array3[5] = {1.234, 2.12333, 3.5345345, 4, 5.34534123312};
   iter(array3, 5, display<double>);
   std::cout << "-------- strings ---------\n";
   std::string array4[5] = {"ai", "ei", "ii", "oi", "ui"};
   iter(array4, 5, display<std::string>);
}
