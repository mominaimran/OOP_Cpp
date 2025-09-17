#include "ActiveUser.h"
#include <iostream>
#include <string>

using namespace std;

int ActiveUser::activeUsers = 0;

ActiveUser::ActiveUser(string name){
    this->name=name;
    activeUsers++;
    cout << "Logged In. Active Users: " << activeUsers << endl;
}

ActiveUser::~ActiveUser(){
    activeUsers--;
    cout << "logged Out. Active Users: " << activeUsers << endl;
}

int ActiveUser::showActiveUsers(){
    return activeUsers;
}