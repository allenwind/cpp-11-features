#include <iostream>

using namespace std;

// 默认模板参数

template <class T, class U=int>
void func(T t, U u)
{
    cout << t << endl;
    cout << u << endl;
}

int main(int argc, char ** argv)
{
    func<string>("C++", 1);
}