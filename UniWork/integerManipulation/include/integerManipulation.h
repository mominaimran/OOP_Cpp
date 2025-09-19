#pragma once
#include <iostream>
using namespace std;

class integerManipulation
{
public:
    void setNum(long long n);
    long long getNum() const;

    void reverseNum();
    void classifyDigits();

    int getEvensCount();
    int getOddsCount();
    int getZerosCount();

    int sumDigits();
    long long getRevNum();

    integerManipulation(long long n = 0);

private:
    long long num;
    long long revNum;
    int evensCount;
    int oddsCount;
    int zerosCount;
};
