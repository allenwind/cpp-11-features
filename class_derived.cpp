#include <iostream>

using namespace std;

// 继承构造函数

class A
{
private:
    int a;

public:
    A(int av) { a = av; }
    void show()
    {
        cout << a << endl;
    }
};

class B : public A
{
private:
    int b;

public:
    B(int av, int bv) : A(av) { b = bv; } // 调用父类构造函数
};

int main(int argc, char ** argv)
{
    B b(1, 2);
}