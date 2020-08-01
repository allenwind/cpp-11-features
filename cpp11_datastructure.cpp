#include <iostream>
#include <string>
#include <array> // 替代内置数组
#include <tuple>
#include <forward_list> // 单向链表，特定情况下性能更好
#include <unordered_set> // hash实现的set，不会排序
#include <unordered_map>

using namespace std;

int main(int argc, char ** argv)
{
    // array
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (auto x : arr)
        cout << x << endl;
    cout << "array size:" << arr.size() << endl;

    // tuple, 比pair扩展性
    tuple<int, double, string> tp = {1, 1.1, "tuple"};
    cout << get<0>(tp) << endl; // std::get
    cout << get<1>(tp) << endl;
    cout << get<2>(tp) << endl;

    // forward_list
    forward_list<string> fl = {"forward", "list", "fl"};
    for (auto & x : fl)
        cout << x << " ";
    cout << endl;

    // unordered_set
    unordered_set<int> us = {1, 2, 3, 4, 5};
    for (auto & x : us)
        cout << x << " ";
    cout << endl;

    return 0;
}