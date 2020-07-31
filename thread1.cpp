#include <iostream>
#include <thread>
#include <string>

using namespace std;

int main(int argc, char ** argv)
{
    auto func = [](string tname, int n) -> void
    {
        for (int i = 0; i < n; i++)
            cout << tname << "-" << i << endl;
    };
    
    thread t1(func, "thread-1", 5);
    thread t2(func, "thread-2", 5);
    thread t3(func, "thread-3", 5);

    if (t1.joinable())
        t1.detach();

    if (t2.joinable())
        t2.detach();

    if (t3.joinable())
        t3.join();
    
    return 0;
}