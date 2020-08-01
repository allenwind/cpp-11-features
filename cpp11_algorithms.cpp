#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char ** argv)
{
    vector<bool> vb = { true, true, true, false, false };
    vector<int> vi = { 2, 4, 6, 8, 10, 1, 3 };

    bool af = all_of(vb.cbegin(), vb.cend(), [](bool i) { return i; }); // 范围[first, last)中所有元素都返回true ==> true
    cout << boolalpha;
    cout << af << endl;

    bool anf = any_of(vb.cbegin(), vb.cend(), [](bool i) { return i; }); // 至少一个元素返回true
    cout << anf << endl;

    array<int, 10> arr;

    auto v = minmax_element(vi.begin(), vi.end()); // min max value
    cout << "max value:" << *(v.first) << endl;
    cout << "min value:" << *(v.second) << endl;

    cout << is_sorted(vi.begin(), vi.end()) << endl; // is sort, is_sorted_until
}