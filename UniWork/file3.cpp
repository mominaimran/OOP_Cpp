#include <iostream>
using namespace std;

class personType
{
private:
    string firstName;
    string lastName;

public:
    void print() const
    {
        cout << firstName << " " << lastName;
    };
    void setName(string first, string last)
    {
        firstName = first;
        lastName = last;
    };
    string getFirstName() const
    {
        return firstName;
    };
    string getLastName() const
    {
        return lastName;
    };

    personType(string first = "", string last = "")
    {
        firstName = first;
        lastName = last;
    };
};

int main()
{
    personType p1;
    p1.setName("Momina", "Imran");
    cout << "Your First Name: " << p1.getFirstName() << endl;
    cout << "Your Last Name: " << p1.getLastName() << endl;
    cout << "Your Full Name: ";
    p1.print();
    cout << endl;

    return 0;
}