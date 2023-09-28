#include "Awesome.hpp"

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T max(const T &a, const T &b)
{
    return (a > b ? a : b);
}

template <typename T>
T min(const T &a, const T &b)
{
    return (a < b ? a : b);
}

int main(void)
{
    // Utilisation avec des entiers
    int x = 42, y = 21;
    swap(x, y);
    std::cout << "Integers: " << x << " " << y << std::endl;
    std::cout << "Max: " << max(x, y) << std::endl;
    std::cout << "Min: " << min(x, y) << std::endl;

    // Utilisation avec des flottants
    float f1 = 42.42, f2 = 21.21;
    swap(f1, f2);
    std::cout << "Floats: " << f1 << " " << f2 << std::endl;
    std::cout << "Max: " << max(f1, f2) << std::endl;
    std::cout << "Min: " << min(f1, f2) << std::endl;

    // Utilisation avec la classe Awesome
    Awesome a(2), b(4);
    swap(a, b);
    std::cout << "Awesome: " << a << " " << b << std::endl;
    std::cout << "Max: " << max(a, b) << std::endl;
    std::cout << "Min: " << min(a, b) << std::endl;

    return (0);
}
