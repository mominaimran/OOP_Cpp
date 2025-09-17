#include <iostream>
#include <cmath> // abs() ke liye
using namespace std;

class integerManipulation
{
public:
    void setNum(long long n)
    {
        num = n;
    };
    long long getNum() const
    {
        return num;
    };

    // Reverse the number
    void reverseNum()
    {
        long long temp = abs(num);
        revNum = 0;
        while (temp != 0)
        {
            int digit = temp % 10;
            revNum = revNum * 10 + digit;
            temp /= 10;
        }
        if (num < 0) // Agar original number negative tha
            revNum = -revNum;
    };

    // Classify digits as even, odd, zero
    void classifyDigits()
    {
        long long temp = abs(num);
        evensCount = oddsCount = zerosCount = 0; // reset counts
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
    };

    int getEvensCount()
    {
        return evensCount;
    };
    int getOddsCount()
    {
        return oddsCount;
    };
    int getZerosCount()
    {
        return zerosCount;
    };

    // Sum of digits
    int sumDigits()
    {
        long long temp = abs(num);
        int sum = 0;
        while (temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        return sum;
    };

    // Getter for reverse
    long long getRevNum()
    {
        return revNum;
    };

    integerManipulation(long long n = 0)
    {
        num = n;
        revNum = 0;
        evensCount = 0;
        oddsCount = 0;
        zerosCount = 0;
    };

private:
    long long num;
    long long revNum;
    int evensCount;
    int oddsCount;
    int zerosCount;
};

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
