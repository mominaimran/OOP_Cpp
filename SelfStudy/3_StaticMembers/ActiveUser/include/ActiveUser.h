#pragma once
#include <string>

using namespace std;

class ActiveUser{
    string name;
    static int activeUsers;

    public:
    ActiveUser(string name);
    ~ActiveUser();

    static int showActiveUsers();
};
