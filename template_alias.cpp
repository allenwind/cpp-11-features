#include <iostream>
#include <array>

using namespace std;

template <class T, class U>
auto add(T t, U u) -> decltype(t + u) // 后置返回类型
{
    return t + u;
}

int main(int argc, char ** argv)
{
    using iarray = array<int, 5>; // alias，可以用于具体化部份参数
    iarray iarr = {1, 2, 3, 4, 5};
    for (auto x : iarr)
        cout << x << endl;

    using add = double (*)(double, double);

}