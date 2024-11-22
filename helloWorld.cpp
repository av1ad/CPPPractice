#include <iostream>


namespace first{
    std::string meow = "Meow ^_^";
}

namespace second{
    std::string meow = "Miao >_<";
}



int main()
{

    std::string meow = "woof";

    std::cout << first::meow << '\n';
    std::cout << second::meow << '\n';
    return 0;
}