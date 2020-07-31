#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    int * a = nullptr; // 表示空指针新引入的常量值
    int * b = NULL; // int 0

    cout << boolalpha;
    cout << a << endl;
    cout << (b == 0) << endl;
}