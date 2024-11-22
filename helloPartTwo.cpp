#include <iostream>
#include <string>
#include <cmath>

int main() {

    std::string name;
    int age;
    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Enter full name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old.";


}