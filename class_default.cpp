#include <iostream>

using namespace std;

// default 声明构造函数为默认构造函数

class Queue
{
private:
    int size;

public:
    Queue(int ss) : size(ss) {}
    Queue() = default;
};

int main(int argc, char ** argv)
{
    Queue q1(10);
    Queue q2;
}