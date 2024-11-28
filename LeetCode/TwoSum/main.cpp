#include <iostream>
#include <unordered_map>
#include <vector>

/// Returns the indices of the two numbers in input that add up to the target
std::vector<int> TwoSum(const std::vector<int>& input, const int target)
{
    for (int i = 0; i < input.size(); i++)
    {
        for (int j = 0; j < input.size(); j++)
        {
            if (input.at(i) + input.at(j) == target && input.at(i) != input.at(j))
            {
                return std::vector{ i, j };
            }
        }
    }
    throw std::invalid_argument("No Numbers Add To Target");
}

// Recursion loop
std::vector<int> TwoSumTwo(const std::vector<int>& input, const int target, const int i)
{
    for (int j = 0; j < input.size(); j++)
        if (input.at(i) + input.at(j) == target && input.at(i) != input.at(j))
            return std::vector{ i, j };
    return TwoSumTwo(input, target, 1 + i);
}

std::vector<int> TwoSumThree(const std::vector<int>& input, const int target)
{
    std::unordered_map<int, int> compliments;
    for (int i = 0; i < input.size(); i++)
    {
        int comp = target - input.at(i);
        if (compliments.find(comp) != compliments.end())
        {
            return std::vector{ compliments.at(comp), i };
        }
        compliments[input.at(i)] = i;
    }
    return {-1, -1};
}

int main()
{
    const std::vector input = { 1, 2, 3, 4 };
    constexpr int target = 7;
    const auto ret = TwoSumThree(input, target);
    std::cout << ret.front() << " " << ret.back() << std::endl;
    return 0;
}