#ifndef AWESOME_HPP
#define AWESOME_HPP

#include <iostream>

class Awesome
{
  public:
    Awesome(void) : _n(0) {}
    Awesome(int n) : _n(n) {}
    Awesome &operator=(Awesome &a) { _n = a._n; return *this; }
    bool operator==(const Awesome &rhs) const { return (this->_n == rhs._n); }
    bool operator!=(const Awesome &rhs) const { return (this->_n != rhs._n); }
    bool operator>(const Awesome &rhs) const { return (this->_n > rhs._n); }
    bool operator<(const Awesome &rhs) const { return (this->_n < rhs._n); }
    bool operator>=(const Awesome &rhs) const { return (this->_n >= rhs._n); }
    bool operator<=(const Awesome &rhs) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }

  private:
    int _n;
};

std::ostream &operator<<(std::ostream &o, const Awesome &a);

#endif // AWESOME_HPP
