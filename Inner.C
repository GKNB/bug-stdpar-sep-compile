#include "Inner.h"

void Inner::test()
{
    auto ptr = std::make_shared<float>(1.0);
    data.push_back(ptr);
}
