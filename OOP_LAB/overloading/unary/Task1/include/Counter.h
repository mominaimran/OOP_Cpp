#ifndef Counter_H
#define Counter_H

class Counter{
    private:
        int count;
    public:
        Counter();
        int getCount();
        Counter operator++();
        void operator++(int);
        Counter& operator--();
};

#endif