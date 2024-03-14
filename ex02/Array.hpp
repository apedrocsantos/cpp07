/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:18:56 by anda-cun          #+#    #+#             */
/*   Updated: 2024/03/14 13:31:36 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Overloading Subscription:    https://www.geeksforgeeks.org/overloading-subscript-or-array-index-operator-in-c/
//                              https://www.learncpp.com/cpp-tutorial/overloading-the-subscript-operator/
// Operator new[]: https://cplusplus.com/reference/new/operator%20new%5b%5d/

#include <iostream>

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> class Array
{
    T *_array;
    unsigned int _size;
    public:
    Array(void) : _array(new T()) {};
    Array(unsigned int const n) : _array(new T[n]), _size(n) {};
    Array (const Array& that) {this->_array = NULL; *this = that;};
    ~Array(void) {delete [] _array;};
    unsigned int size() const {return (_size);};
    T &operator[](int index)
    {
        if (index < 0 || abs(index) >= (int)_size)
        {
            std::cout << _size << " " << index << std::endl;
            throw(std::out_of_range("Index is out of bounds."));
        }
        if (index < 0)
            index = _size - index;
        return (this->_array[index]);
    };
    Array &operator=(const Array &that)
    {
        if (this != &that)
        {
            if (this->_array)
                delete [] _array;
            this->_size = that.size();
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                this->_array[i] = that._array[i];
        }
        return (*this);
    }
};

#endif
