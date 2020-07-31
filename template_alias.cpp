#include <iostream>
#include <array>

using namespace std;

template <class T, class U>
auto add(T t, U u) -> decltype(t + u)
{
    return t + u;
}

int main(int argc, char ** argv)
{
    using iarray = array<int, 5>;
    iarray iarr = {1, 2, 3, 4, 5};
    for (auto x : iarr)
        cout << x << endl;

    using add = double (*)(double, double);

}