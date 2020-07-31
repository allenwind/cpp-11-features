#include <iostream>
#include <atomic>
#include <thread>
#include <array>

using namespace std;

int main(int argc, char ** argv)
{   
    // int count;
    atomic<int> count;
    auto add = [&count]()
    {
        count += 1;
    };

    auto sub = [&count]()
    {
        count -= 1;
    };

    array<thread, 1000> threads;
    for (int i = 0; i < 1000; i++)
    {
        if (i % 2 == 0)
            threads[i] = thread(add);
        else
            threads[i] = thread(sub);
    }

    for (auto & t : threads)
        t.join();

    // cout << count << endl;
    cout << count.load() << endl;
}