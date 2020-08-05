#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    // long long、char16_t、char32_t
    unsigned long long i= 0;
    cout << sizeof(i) << endl;

    char16_t j;
    cout << sizeof(j) << endl;

    char32_t k;
    cout << sizeof(k) << endl;

    unsigned long long x;
    cout << sizeof(x) << endl;
}