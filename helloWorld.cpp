#include <iostream>
#include <vector>

typedef std::string text_t; // using is better than using a typedef
namespace first
{
    text_t meow = "Meow ^_^";
}

namespace second
{
    text_t meow = "Miao >_<";
}


int main()
{

    text_t meow = "woof";

    std::cout << first::meow << '\n';
    std::cout << second::meow << '\n';
    return 0;
}