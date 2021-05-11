/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int hold;
    int userInput[40];

    for (int i = 0; i < 40; i++)
    {
        std::cin >> userInput[i];
    }
    for (int i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }
    std::cout << "\n";
    for (int i = 39; i >= 0; i--)
    {
        std::cout << userInput[i] << " ";
    }
    std::cout << "\n";

    for (int i = 0; i < 40; i++)
    {
        for (int j = 1; j < 40; j++)
        {
            if (userInput[j - 1] > userInput[j])
            {
                hold = userInput[j];
                userInput[j] = userInput[j - 1];
                userInput[j - 1] = hold;
            }
        }
    }
    for (int i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }
    return 0;
}
