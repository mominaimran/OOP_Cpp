#include "Book.h"

Book::Book(int p, int t) : price(p), tax(t) {}

Book Book::operator+(Book b2)
{
    Book temp;
    price = price + b2.price;
    tax = tax + b2.tax;
    return temp;
}

bool Book::operator<(Book b2)
{
    return (price + tax) < (b2.price + b2.tax);
}

Book& Book::operator=(const Book &b2)
{
    if (this != &b2) {   // self-assignment check (optional)
        price = b2.price;
        tax = b2.tax;
    }
    return *this;
}

istream &operator>>(istream &in, Book &b2)
{
    cout << "Enter Book Price: ";
    in >> b2.price;
    cout << "Enter tax: ";
    in >> b2.tax;
    return in;
}

ostream &operator<<(ostream &out, const Book &b2)
{
    out << "Price: " << b2.price << ", Tax: " << b2.tax << endl;
    return out;
}