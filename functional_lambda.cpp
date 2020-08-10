#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    // auto func = [capture] (params) opt -> ret { body; };
    // capture
    // [&] 捕获外部作用域所有变量,当作引用使用
    // [=] 捕获外部作用域所有变量，按照值传递, 当作副本使用
    // opt : {const, mutable}

    auto sum1 = [](int a, int b) -> int { return a + b; };
    cout << sum1(1, 2) << endl;

    int a = 1;
    auto sum2 = [a](int b, int c) -> int { return a + b + c; };
    cout << sum2(2, 3) << endl;

    int b = 1;
    auto add_x = [&b](int x) -> void { b += x; };
    add_x(10);
    cout << b << endl;

    // lambda opt默认是const，不能修改成员变量，而加mutable能
    // auto add_x2 = [=](int x) -> void { b += x; }; is error
    auto add_x2 = [=](int x) mutable -> void { b += x; };
    add_x2(10);
    cout << b << endl;

    return 0;
}