#include <iostream>
#include <functional>

using namespace std;

// std::bind将可调用对象和参数一起绑定，后期执行

int main(int argc, char ** argv)
{
    auto sum = [](int a, int b) -> int { return a + b; };
    auto add_one = bind(sum, placeholders::_1, 1);
    
    int i = 10;
    i = add_one(i);
    cout << i << endl;
}