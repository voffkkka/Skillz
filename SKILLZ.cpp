#include <iostream>
#include "Helper.h"


int main()
{
    Helper s;
    int a = 2;
    int b = 3;

    int result = s.GetSquareOfSum(a, b);

    std::cout << "Result: " << result << std::endl;

    return 0;
}