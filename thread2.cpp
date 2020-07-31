#include <iostream>
#include <string>
#include <vector>
#include <thread>

using namespace std;

// c++11引入std::thread来创建线程

void show(string & tname, vector<int> vs)
{
    for (auto v : vs)
        cout << tname << "-" << v << endl;
}

int main(int argc, char ** argv)
{
    vector<int> vs = {1, 2, 3, 4, 5};

    cout << "cpu cout:" << std::thread::hardware_concurrency() << endl;

    auto func1 = [vs]() -> void { for (auto x : vs) cout << "thread-1:" << x << endl; };
    thread t1(func1);
    cout << "thread1-id:" << t1.get_id() << endl;
    if (t1.joinable())
        t1.detach(); // 将线程和线程对象分离

    auto func2 = []() -> void { cout << "thread2 out" << endl; };
    thread t2(func2);
    cout << "thread2-id:" << t2.get_id() << endl;
    if (t2.joinable())
        t2.detach();

    auto func3 = [vs]() -> void { this_thread::sleep_for(1ms); for (auto x : vs) cout << "thread-3:" << x << endl; };
    thread t3(func3);
    cout << "thread3-id:" << t3.get_id() << endl;
    if (t3.joinable())
        t3.join(); // wait thread3 out;

    this_thread::sleep_for(1000ms); // C++11 support xxxms 

    return 0;
}