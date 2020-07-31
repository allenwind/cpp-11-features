#include <iostream>

using namespace std;



// 委托构造函数
// 在同一类中一构造函数调用另一构造函数
class S
{
private:
    int a;
    int b;
    int c;
public:
    S(int av) { a = av; }
    S(int av, int bv) : S(av) { b = bv; } // 调用另一构造函数
    S(int av, int bv, int cv) : S(av) { b = bv; c = cv; } // 调用另一构造函数
    void show()
    {
        cout << a << b << c << endl;
    }
};

int main(int argc, char ** argv)
{
    S s(1, 2, 3);
    s.show();
}