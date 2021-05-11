#include "Factorial.hpp"

// See Factorial.h for your method's signature (eg, its args and return value).

int Factorial(int n)
{
    int result = n;
    while (--n > 0)
        result *= n;
    return (result);
}
