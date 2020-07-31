#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{   
    // 如果参数值为 false，则打印 message，编译失败
    static_assert((1 == 1), "error");
}