#include <iostream>
#include <string>

int main()
{
    int64_t x = 18446744;               // 64 bit signed integer
    int32_t y = 2147483647;             // 32 bit signed integer
    int16_t z = 32767;                  // 16 bit signed integer
    int8_t a = 127;                     // 8 bit signed integer
    uint64_t b = 18446744073709551615U; // 64 bit unsigned integer
    uint32_t c = 4294967295U;           // 32 bit unsigned integer
    bool d = false;
    bool e = true;
    char f = 'c';
    char g = 0x64;
    std::string h = "hello"; // strings are not a primitive type
    float pi = 3.14;
    float longPi = 3.14159265358979323846;
    double longDoublePi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;

    std::cout << x << std::endl
              << sizeof(x) << std::endl
              << y << std::endl
              << z << std::endl
              << a << std::endl
              << b << std::endl
              << c << std::endl
              << d << std::endl
              << e << std::endl
              << f << std::endl
              << g << std::endl
              << pi << std::endl
              << longPi << std::endl
              << longDoublePi << std::endl;
    return 0;
}