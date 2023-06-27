#pragma once
class Helper
{
public:
    int GetSquareOfSum(int a, int b)
    {
        int sum = a + b;
        int square = sum * sum;
        return square;
    }
};