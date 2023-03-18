#include "Inner.h"
#include <iostream>

int main()
{
    {
        Inner in;
        in.test();
        std::cerr << "Inner finish" << std::endl;
    }
    std::cerr << "main finish" << std::endl;
    return 0;
}
