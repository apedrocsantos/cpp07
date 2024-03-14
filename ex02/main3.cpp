#include <iostream>
#include <cstdlib>
#include "Array.hpp"
#include <array>

#define MAX_VAL 750
int main(int, char**)
{
    std::array<int,MAX_VAL> numbers;
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
    }
    std::array<int, 100> tmp;
    std::copy(numbers.begin(), numbers.end(), tmp.begin());
    //SCOPE
    {
        std::array<int, MAX_VAL> tmp = numbers;
        std::array<int, MAX_VAL> test;
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << "CATCH1\n";
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << "CATCH2\n";
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    return 0;
}