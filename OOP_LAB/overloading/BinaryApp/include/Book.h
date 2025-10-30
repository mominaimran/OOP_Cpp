#ifndef TOTAL_H
#define TOTAL_H
#include <iostream>
using namespace std;

class Book{
    private:
        int price;
        int tax;
    public:
        Book(int p=0, int t=0);

        //Binary operator
        Book operator+(Book b2);
        bool operator<(Book b2);
        Book& operator=(const Book &b2);

        //stream operator
        friend istream& operator>>(istream &in, Book &b2);
        friend ostream& operator<<(ostream &out, const Book &b2);

        //Binary operator
};

#endif
