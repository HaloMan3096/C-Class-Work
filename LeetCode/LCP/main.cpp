#include <iostream>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string>& strs)
{
    auto solution = std::string("");

    for (auto str : strs)
    {
        if (solution == std::string(""))
        {
            solution = str.begin();
        }
    }

    return solution;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
