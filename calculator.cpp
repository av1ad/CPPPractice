#include <iostream>
#include <cmath>
#include <string>

int main()
{

    long firstNumber;
    long secondNumber;
    std::string operation;
    std::string sum;

    std::cout << "Enter first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter an operation (+, -, /, *): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> secondNumber;

    if (operation == "+")
    {
        std::cout << "The sum of " << firstNumber << " + " << secondNumber << " is " << firstNumber + secondNumber << std::endl;
    }
    else if (operation == "-")
    {
        std::cout << "The sum of " << firstNumber << " - " << secondNumber << " is " << firstNumber - secondNumber << std::endl;
    }
    else if (operation == "/")
    {
        if (firstNumber == 0 || secondNumber == 0)
        {
            std::cout << "You cannot divide by 0";
        }
        else
        {
            std::cout << "The sum of " << firstNumber << " / " << secondNumber << " is " << firstNumber / secondNumber << std::endl;
        }
    }
    else if (operation == "*")
    {
        std::cout << "The sum of " << firstNumber << " * " << secondNumber << " is " << firstNumber * secondNumber << std::endl;
    }
    else
    {
        std::cout << "This is not a valid operation, please input a valid operation next time.";
    }
    return 0;
}