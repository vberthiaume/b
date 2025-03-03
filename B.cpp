#include "B.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

B::B()
{
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    doStuff();
    std::cout << "constructed a B\n";
}

int B::doStuff()
{
    i = std::rand();
    std::cout << "B::i is now == " << i << "\n";
    return i;
}