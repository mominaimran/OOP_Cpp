#include <iostream>
using namespace std;

class Base{
    public:
        int pub = 1;
    protected:
        int pro = 3;
    private:
        int pri = 2;
};

// ---- Public Inheritance
class DerivedPublic : public Base {
public:
    void show() {
        cout << pub << " " << pro << endl; // ✅ allowed
        // cout << priv; ❌ not allowed
    }
};

// ---- Protected Inheritance
class DerivedProtected : protected Base {
public:
    void show() {
        cout << pub << " " << pro << endl; // ✅ allowed
    }
};

// ---- Private Inheritance
class DerivedPrivate : private Base {
public:
    void show() {
        cout << pub << " " << pro << endl; // ✅ allowed
    }
};

int main() {
    DerivedPublic dp;
    dp.pub = 10;   // ✅ public hai
    // dp.prot;    ❌ not allowed
    dp.show();

    DerivedProtected dpr;
    // dpr.pub;    ❌ not allowed (ab protected ban gaya)
    dpr.show();

    DerivedPrivate dpi;
    // dpi.pub;    ❌ not allowed (ab private ban gaya)
    dpi.show();

    return 0;
}