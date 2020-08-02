#include <iostream>
#include <thread>

using namespace std;

struct Love
{
    unsigned long long value;
};

constexpr Love operator"" _love (unsigned long long value)
{
    return Love{value};
}

int main(int argc, char ** argv)
{
    Love l100 = 100_love;
    cout << l100.value << endl;

    this_thread::sleep_for(100ms);

    return 0;
}