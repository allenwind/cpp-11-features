#include <iostream>

using namespace std;

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
    for (auto x : {1, 2, 3, 4, 5, 6, 7})
        cout << fib(x) << endl;


    // to const expression;
    int f10 = fib(10);
    int f11 = fib(11);

    cout << f10 << " " << f11 << endl;

    return 0;
}