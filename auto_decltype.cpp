#include <iostream>
#include <vector>

using namespace std;

double square(double x);

// 返回类型后置
template <class T, class U>
auto mul(T t, U u) -> decltype(t + u)
{
    return t * u;
}

int main(int argc, char ** argv)
{
    // auto e; is error
    auto x = 1.0;
    auto y = 1.2;
    auto z = "autoz";
    auto & i = z;
    auto * j = &i;
    auto k = *j;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    decltype(x+y) a = x + y;
    cout << "x + y = " << a << endl;

    const int & b = 1;
    int c = 2;
    decltype(b) d = c; // as const int &
    cout << &c << endl;
    cout << &d << endl;

    // auto in for loop
    vector<int> vs = { 1, 2, 3, 4, 5 };
    for (auto x : vs)
        cout << x << endl;

    decltype(vs) vs2 = {6, 7, 8};
    for (auto x : vs2)
        cout << x << endl;

    // function and decltype
    double t = 2.5;
    decltype(square(t)) st = square(t);
    cout << st << endl;

    // auto lambda
    auto sum = [](int a, int b) -> int { return a + b; };
    cout << sum(1, 1) << endl;

    cout << mul<int, int>(25, 25) << endl;
}

double square(double x)
{
    return x * x;
}
