#include <iostream>

using namespace std;

// final修饰类，表示禁止该类派生和虚函数重载
class A final
{

};

// class B : public A {}; error


// override修饰派生类中的成员函数，该函数重写基类函数
class B
{
public:
    virtual void show()
    {
        cout << "B" << endl;
    }
};

class C : public B
{
public:
    void show() override
    {
        cout << "C" << endl;
    }
};

int main(int argc, char ** argv)
{
    B b;
    b.show();

    C c;
    c.show();
}