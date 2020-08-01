#include <iostream>

using namespace std;

class Queue
{
private:
    int capacity;

public:
    Queue(int ca) : capacity(ca) {}
    int size() const { return capacity; }
};

class List
{
private:
    int capacity;

public:
    explicit List(int ca) : capacity(ca) {} // 不可以被隐式转换
    int size() const { return capacity; }
};

int main(int argc, char ** argv)
{
    Queue queue = 10; // 可以被隐式转换
    cout << "queue size:" << queue.size() << endl;

    // 不可以被隐式转换
    List list(10); // List list = 10; is error
    cout << "list size:" << list.size() << endl;
}