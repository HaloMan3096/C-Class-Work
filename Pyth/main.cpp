#include <cmath>
#include <iostream>
#include <unordered_map>
#include <vector>

struct triple
{
    int a;
    int b;
    int c;

    triple(int a, int b, int c) : a(a), b(b), c(c) {}
};

// if A^2 + B^2 = C^2
// Take an int in and find all the ints that follow this rule
// n = 1000
std::pmr::vector<triple> pyth(const int* n)
{
    std::pmr::vector<triple> solution;

    for (int a = 0; a < *n; a++)
    {
        for (int b = 0; b < *n; b++)
        {
            int c = pow(a, a) + pow(b, b);
            if (floor(std::sqrt(c)) == a + b)
            {
                solution.push_back(triple(a, b, c));
            }
        }
    }

    return solution;
}

int max(std::vector<int>& ints)
{
    int largest = ints.at(ints.size() - 1);
    for (int i = 0; i < ints.size() - 1; i++)
    {
        if (ints[i] > largest)
        {
            largest = ints[i];
        }
    }
    return largest;
}

int min(std::vector<int>& ints)
{
    int min = ints.at(ints.size() - 1);
    for (int i = 0; i < ints.size() - 1; i++)
    {
        if (ints[i] < min)
        {
            min = ints[i];
        }
    }
    return min;
}

int avg(std::vector<int>& ints)
{
    int avg = 0;
    for (int i = 0; i < ints.size(); i++)
    {
        avg += ints[i];
    }
    return avg = avg / ints.size();
}

int main()
{
    constexpr int n = 1000;

    const std::vector<int>& ints = {1, 2, 45, 3, 432, 6, 34, 234};

    std::cout << max(ints) << std::endl;
    std::cout << min(ints) << std::endl;
    std::cout << avg(ints) << std::endl;

    return 0;
}

/*
    auto pn = pyth(&n);
    for (auto [a, b, c] : pn)
    {
        std::cout << "A: " << a << " B: " << b << " C: " << c << std::endl;
    }
 */