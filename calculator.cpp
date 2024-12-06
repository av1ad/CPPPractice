#include <iostream>
#include <cmath>
#include <string>

int main()
{

    double firstNumber;
    double secondNumber;
    std::string operation;

    std::cout << "Enter first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter an operation (+, -, /, *): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> secondNumber;
    std::cout << "The sum of " << firstNumber << " + " << secondNumber << " is " << firstNumber + secondNumber << std::endl;
    return 0;
}