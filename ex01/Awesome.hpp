#ifndef AWESOME_HPP
#define AWESOME_HPP

#include <iostream>

class Awesome
{
  public:
    Awesome(void) : _n(42) {}
    int get(void) const { return this->_n; }

  private:
    int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs);

#endif // AWESOME_HPP
