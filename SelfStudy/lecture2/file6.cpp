#include <iostream>
using namespace std;
//destructor

class Customer{
    string name;
    int *age;

    public:
    void show(){
        cout << name << " | " << *age << endl;
    }

    Customer(){
        name = "Momina";
        age = new int;
        *age = 22;
        cout << "Constructor is called..." << endl;
    }

    //created once
    ~Customer(){
        delete age;
        cout << "Destructor is called..." << endl;
    }
};

int main() {
    Customer A1;
    A1.show();

    return 0;
}


// 4️⃣ What is a Destructor?
//==> Definition: A destructor is a special member function that automatically runs when an object is destroyed.
//==> Purpose: Clean up resources, memory, or files.
//==> Key points:
// Same name as class but with ~.
// No return type, no arguments.
// Only one destructor per class.