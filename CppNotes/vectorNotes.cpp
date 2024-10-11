#include <iostream>
#include <vector>

int v_notes()
{
    // Vector is like a list in C#, it is a single typed dynamic size collection
    std::vector<int> myVector = {};

    // .push_back() adds something to the end of the vector
    myVector.push_back(1);
    myVector.push_back(2);

    // The most basic way of looping through a vector
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    // Auto will let the compiler decide at run time
    for (auto it = myVector.begin(); it != myVector.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    // This is like our for each in C#
    for (auto i : myVector)
    {
        std::cout << i << std::endl;
    }

    // The issue with vectors is it takes two lists
    // In the back end it is a list of n elements
    // when pushing back it creates a new list and then copies it over
    // Then adds the new item, This can get expensive if done a lot in a row
    // Something you can do to help is to do is call .reserve(n);

    // You can index vectors with [], it does not bound check this >:(
    int x = myVector[0];
    // If you want to bound check you should use .at();
    int y = myVector.at(0);

    return 0;
}