#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    // a b 左值
    int a = 1; // 等号左边的东西是左值
    int b; // 可取址且有名字的东西是左值
    int * c = &b;

    int d = 8; // 8作为普通字面量是右值
    int e = a + d; // a+d 的返回值是右值

    int & f = e; // 左值引用
    int && ff = 2; // 右值引用 int & ff = 2; is error
    const int & fff = 2; // 常右值引用

    // 把左值转换为右值
    int g = 4; // g 左值
    int && h = move(g); // move把左值转换为右值
}