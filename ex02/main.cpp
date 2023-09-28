#include "Array.hpp"

int main()
{
    // Test avec des entiers
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i)
    {
        intArray[i] = i;
    }

    try
    {
        for (unsigned int i = 0; i <= intArray.size(); ++i)
        {
            std::cout << intArray[i] << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    // Test avec des flottants
    Array<float> floatArray(3);
    for (unsigned int i = 0; i < floatArray.size(); ++i)
    {
        floatArray[i] = static_cast<float>(i) + 0.5;
    }

    try
    {
        for (unsigned int i = 0; i <= floatArray.size(); ++i)
        {
            std::cout << floatArray[i] << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
