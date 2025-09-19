#include "integerManipulation.h"
#include <cmath> // abs()

// Constructor
integerManipulation::integerManipulation(long long n)
{
    num = n;
    revNum = 0;
    evensCount = 0;
    oddsCount = 0;
    zerosCount = 0;
}

void integerManipulation::setNum(long long n)
{
    num = n;
}

long long integerManipulation::getNum() const
{
    return num;
}

// Reverse number
void integerManipulation::reverseNum()
{
    long long temp = abs(num);
    revNum = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        revNum = revNum * 10 + digit;
        temp /= 10;
    }
    if (num < 0) // Negative case
        revNum = -revNum;
}

// Classify digits
void integerManipulation::classifyDigits()
{
    long long temp = abs(num);
    evensCount = oddsCount = zerosCount = 0;

    while (temp != 0)
    {
        int digit = temp % 10;
        temp /= 10;
        if (digit % 2 == 0)
        {
            evensCount++;
            if (digit == 0)
                zerosCount++;
        }
        else
            oddsCount++;
    }
}

int integerManipulation::getEvensCount()
{
    return evensCount;
}
int integerManipulation::getOddsCount()
{
    return oddsCount;
}
int integerManipulation::getZerosCount()
{
    return zerosCount;
}

// Sum of digits
int integerManipulation::sumDigits()
{
    long long temp = abs(num);
    int sum = 0;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

long long integerManipulation::getRevNum()
{
    return revNum;
}
