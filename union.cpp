#include <iostream>

using namespace std;

// C++11前，union不允许有非POD类型，如class、struct

class Queue
{
private:
    int size;

public:
    Queue(int ss) : size(ss) {}
};

union U
{
    Queue queue;
    double cap;
};

int main(int argc, char ** argv)
{
    
}