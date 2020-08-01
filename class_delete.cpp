#include <iostream>

using namespace std;

class Queue
{
private:
    int size;

public:
    Queue(int ss) : size(ss) {}
    Queue() = delete;
};

int main(int argc, char ** argv)
{
    Queue q1(10);
    // Queue q2; is error
}