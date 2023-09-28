#include "Awesome.hpp"

std::ostream &operator<<(std::ostream &o, const Awesome &a)
{
    o << a.get_n();
    return o;
}
