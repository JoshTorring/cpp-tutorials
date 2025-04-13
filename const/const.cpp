#include <iostream> 

int main()
{
    const int x = 7; //makes x immutable
    constexpr int y = 4 + 91 + 42;
    std::cout << x << std::endl;
    // x = 3; // Cannot reassign
    std::cout << y << std::endl;
    return 0;
}