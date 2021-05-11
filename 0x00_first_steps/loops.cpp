/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/
#include <iostream>
#include <sstream>

int main()
{
    int num, add = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "write a number: ";
        std::cin >> num;
        std::cout << num
                  << "\n";
        add += num;
    }
    std::cout << "sum "
              << add
              << "\naverage "
              << add / 5.0
              << "\n";

    return (0);
}
