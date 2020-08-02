#include <iostream>
#include <random>
#include <time.h>
#include <array>

int main(int argc, char ** argv)
{
    std::default_random_engine random(time(nullptr));

    std::uniform_real_distribution<double> rd(0.0, 1.0);
    std::array<double, 20> rds;
    for (int i = 0; i < 20; i++)
        rds[i] = rd(random);

    for (auto x : rds)
        std::cout << x << std::endl;
}