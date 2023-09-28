#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print(T &x)
{
    std::cout << x << std::endl;
}

template <typename T, typename Func>
void iter(T *array, size_t length, Func func)
{
    for (size_t i = 0; i < length; ++i)
    {
        func(array[i]);
    }
}

#endif // ITER_HPP
