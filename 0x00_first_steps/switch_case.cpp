#include <iostream>

int main()
{
    float in1, in2, result;
    char op;

    std::cout << "Enter two numbers:\n";
    std::cin >> in1;
    std::cin >> in2;
    std::cout << "Enter the operation '+','-','*','/':\n";
    std::cin >> op;

    switch (op)
    {
    case '+':
        result = in1 + in2;
        break;

    case '-':
        result = in1 - in2;
        break;

    case '*':
        result = in1 * in2;
        break;

    case '/':
        result = in1 / in2;
        break;

    default:
        std::cout << "You should use only  this operation '+','-','*','/':\n";
        return 0;
    }
    std::cout << in1
              << " "
              << op
              << " "
              << in2
              << " = "
              << result
              << "\n";

    return 0;
}
