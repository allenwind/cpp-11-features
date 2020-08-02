#include <iostream>
#include <functional>
#include <array>

using namespace std;

/*
可调用对象:
1. 函数指针
2. 仿函数, lambda表达式
3. 可转换为函数指针的类对象
4. 类成员(函数)指针
5. bind表达式或其它函数对象
*/

class V
{
public:
    V() {}
    double sum(array<double, 5> arr)
    {
        double s = 0.0;
        for (auto x : arr)
            s += x;
        return s;
    }
};

double sum(array<double, 5> arr)
{
    double s = 0.0;
    for (auto x : arr)
        s += x;
    return s;
}

int main(int argc, char ** argv)
{   
    // std::function 可调用对象的封装器
    array<double, 5> arr = {1, 2, 3, 4, 5};
    function<double(array<double, 5>)> f1 = sum;
    cout << sum(arr) << endl;

    // 利用 function 写递归匿名函数
    function<int(int)> fib = [&fib](int x) -> int
    {
        return (x == 1 || x == 2) ? 1 : fib(x - 1) + fib(x - 2); 
    };

    cout << fib(1) << endl;
    cout << fib(2) << endl;
    cout << fib(10) << endl;

}