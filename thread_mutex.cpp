#include <iostream>
#include <mutex>
#include <thread>
#include <array>

using namespace std;

/*
mutex:
std::mutex：互斥量，不能递归使用，不带超时
std::timed_mutex：带超时的互斥量，不能递归, try_lock_for
std::recursive_mutex：递归互斥量，可重入，不带超时
std::recursive_timed_mutex：带超时的互斥量，可以递归使用
*/

int main(int argc, char ** argv)
{
    mutex m;
    auto func = [&m](int thread_id, int n, bool lock)
    {
        if (lock)
            m.lock();
        for (int i = 0; i < n; i++)
            cout << "thread id:" << thread_id << "->" << i << endl;
        if (lock)
            m.unlock();
    };

    cout << "without mutex" << endl;
    array<thread, 10> threads;
    for (int i = 0; i < 10; i++)
        threads[i] = thread(func, i, 5, false);

    for (auto & t : threads)
        t.join();

    cout << "with mutex" << endl;
    for (int i = 0; i < 10; i++)
        threads[i] = thread(func, i, 5, true);
    
    for (auto & t : threads)
        t.join();
    
    return 0;
}