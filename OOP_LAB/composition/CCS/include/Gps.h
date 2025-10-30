#ifndef GPS_H
#define GPS_H
#include <iostream>
#include <string>
using namespace std;

class Gps{
    private:
        string version, currentLocation;
    public:
        Gps(string v="N/A", string cl="N/A");
        void setGps(string v, string cl);
        void showGps()const;
};

#endif