/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:54:53 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/22 21:24:34 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

// int main()
// {
//    std::cout << "-------- ints ---------\n";
//    int array[5] = {1, 2, 3, 4, 5};
//    iter(array, 5, &display);
//    std::cout << "-------- floats ---------\n";
//    float array2[5] = {1.1f, 2.2f, 3, 4.4f, 55.5f};
//    iter(array2, 5, &display);
//    std::cout << "-------- doubles ---------\n";
//    double array3[5] = {1.234, 2.12333, 3.5345345, 4, 5.34534123312};
//    iter(array3, 5, &display);
//    std::cout << "-------- strings ---------\n";
//    std::string array4[5] = {"ai", "ei", "ii", "oi", "ui"};
//    iter(array4, 5, &display);
// }

class Awesome
{
   int _n;
   public:
   Awesome (void) : _n(42) {return;}
   int get(void) const {return this->_n;}
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
   o << rhs.get();
   return o;
}

template <typename T>
void print(T &x)
{
   std::cout << x << std::endl;
   return;
}

int main()
{
   int tab[] = {0, 1, 2, 3, 4};
   Awesome tab2[5];
   
   iter(tab, 5, print<const int>);
   iter(tab2, 5, print<Awesome>);

   return 0;
}