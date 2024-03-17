#include <iostream>
#include <cstdlib>
#include "Array.hpp"
#include <array>

#define MAX_VAL 750

class C
{
    public:
    int o;
    C() {};
    C(int i) : o(i) {};
    C &operator=(C const &that) {if (this != &that) this->o = that.o; return *this;};
    ~C() {};
};

int main(int, char**)
{
    std::cout << "================> Test1\n";
    Array<int> numbers(MAX_VAL);
    std::cout << numbers[101] << std::endl;
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    Array<int> tmp(100);
    tmp = numbers;
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    std::cout << "================> Test2\n";

    Array<int> wtv;
    std::cout << "wtv size :" << wtv.size() << ", wtv address: " << &wtv << std::endl;
    try
    {
        wtv[0] = 10;
        std::cout << wtv[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Array<int> test(10);
    Array<int> oi = test;
    std::cout << "test size: " << test.size() << std::endl;
    std::cout << "oi size: " << oi.size() << std::endl;
    std::cout << "test[5]: " << test[5] << std::endl;
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

    const Array<char> const_array(10);
    // const_array[4] = 'a'; // Doesn't compile
    std::cout << "================> Array of classes\n";
    Array<C>c_array(2);
    C c1(42);
    C c2(24);
    C c3(666);
    try
    {
        c_array[0] = c1;
        c_array[1] = c2;
        c_array[2] = c3;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << c_array[0].o  << " " << c_array[1].o<< std::endl;
    return 0;
}