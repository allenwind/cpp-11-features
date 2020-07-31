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
    // std::function
    array<double, 5> arr = {1, 2, 3, 4, 5};
    function<double(array<double, 5>)> f1 = sum;
    cout << sum(arr) << endl;

    //function<double(array<double, 5>)> f2 = V::sum;

}