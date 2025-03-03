#include "B.hpp"
#include <iostream>

B::B()
{
    std::cout << "constructed a B\n";
    i = 3;

    doStuff();
}

void B::doStuff()
{
    std::cout << "B did some stuff with i == " << i << "\n";
    i = 3;
}
