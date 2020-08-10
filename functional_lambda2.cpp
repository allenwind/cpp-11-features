#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;

int main(int argc, char ** argv)
{
    std::vector<int> vs = { 3, 4, 2, 5, 1 };
    std::sort(vs.begin(), vs.end(), [](int a, int b) { return a < b; }); // lambda in sort algorithm
    for (auto x : vs)
        cout << x;
    cout << endl;

    return 0;
}