#include <iostream>
#include <cmath>
#include <string>

int main()
{

    float firstNumber = 11.0124;
    const float SECOND_NUMBER = 10;
    float sum = firstNumber + SECOND_NUMBER;

    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Hello! " << name;

    std::cout << firstNumber << '\n';
    std::cout << SECOND_NUMBER  << '\n';
    std::cout << "Sum of " << firstNumber << " + " << SECOND_NUMBER << " is " << sum << '\n';
    return 0;
}