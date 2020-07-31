#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    
}

constexpr int cumsum(int s)
{
    return s ? s + cumsum(s-1) : 0;
}