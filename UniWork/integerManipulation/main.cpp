#include <iostream>
#include "integerManipulation.h"
using namespace std;

int main()
{
    integerManipulation number;
    long long num;

    cout << "Enter an integer: ";
    cin >> num;

    number.setNum(num);
    number.classifyDigits();
    number.reverseNum();

    cout << number.getNum() << "------" << endl
         << "The number of even digits: " << number.getEvensCount() << endl
         << "The number of zeros: " << number.getZerosCount() << endl
         << "The number of odd digits: " << number.getOddsCount() << endl
         << "The sum of digits: " << number.sumDigits() << endl
         << "The reverse of number: " << number.getRevNum() << endl;

    return 0;
}
