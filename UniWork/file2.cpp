#include <iostream>
#include <ctime>
using namespace std;

class Die{
    private:
        int num;
    public:
        Die(){
            num = 1;
            srand(time(0));
        };
        void roll(){
            num = rand() % 6 + 1;
        }; 
        int getNum() const{
            return num;
        };
};

int main() {
    Die d1;
    Die d2;

    cout << "Die 1: " << d1.getNum() << endl;
    cout << "Die 2: " << d2.getNum() << endl;

    d1.roll();
    cout << "After rolling die 1: " << d1.getNum() << endl;
    d2.roll();
    cout << "After rolling die 2: " << d2.getNum() << endl;

    cout << "Sum of the nums rolled by dice is: " << d1.getNum() + d2.getNum() << endl;

    d1.roll();
    d2.roll();

    cout << "After again rolling, Sum of the nums rolled by dice is: " << d1.getNum() + d2.getNum() << endl;

    return 0;
}