#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(int argc, char ** argv)
{
    vector<int> vs = {1, 2, 3};

    // before C++11
    for (auto x = vs.begin(); x != vs.end(); x++)
        cout << *x << endl;

    cout << "using for loop in C++11" << endl;
    for (auto x : vs)
        cout << x << endl;

    array<int, 3> as = {1, 2, 3};
    for (auto x : as)
        cout << x + 3 << endl;

    for (auto x : {1, 2, 3})
        cout << x + 6 << endl;
}