#include <iostream>

using namespace std;

void const_examples()
{
    const int a = 1;

    int b = 2;
    const int & c = b;
    // c = 3 is error;
    b = 3; // is ok
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

constexpr int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fib(n-1) + fib(n-2);
}

// or
// constexpr int fib(int n)
// {
//     return (n == 1 || n == 2) ? 1 : fib(n-1) + fib(n-2);
// }

int main(int argc, char ** argv)
{
    const_examples();

    for (auto x : {1, 2, 3, 4, 5, 6, 7})
        cout << fib(x) << endl;

    // to const expression;
    int f10 = fib(10);
    int f11 = fib(11);

    cout << f10 << " " << f11 << endl;

    return 0;
}