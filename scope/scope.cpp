#include <iostream>

int y = 111; // global variable

int main(){
    int x = 0;
    {
        int x = 23;
        std::cout << "x in inner scope: " << x << std::endl; // prints 23
        x = 24; // modifies the inner x
        std::cout << "x in inner scope after modification: " << x << std::endl; // prints 24
        std::cout << "y in inner scope: " << y << std::endl; // prints 111
    }
    std::cout << "x in outer scope: " << x << std::endl; // prints 0
    x = 3;
    std::cout << "x in outer scope after modification: " << x << std::endl; // prints 3
    std::cout << "y in outer scope: " << y << std::endl; // prints 111
    return 0;
}