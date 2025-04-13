#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

int main()
// Arrays are a collection of elements of the same type
// They are fixed size and cannot be resized
// They are stored in contiguous memory locations
// They can be accessed using an index
// The index starts from 0
// The size of the array must be known at compile time
// The size of the array can be a constant, constant expression or a variable
{
    int arraySize = 15;
    int x[4] = {42, 14, 89, 1002};
    int y[arraySize];

    const std::size_t stdArraySize = 23;
    std::array<int, stdArraySize> ids;

    for (int i = 0; i < arraySize; i++)
    {
        y[i] = i;
    }

    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "position " << i << ": " << y[i] << std::endl;
    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << "number " << i << ": " << x[i] << std::endl;
    }
    std::cout << "element 0:  " << x[0] << std::endl;

    // std::iota(std::begin(y), std::end(y), arraySize); //can't be used with raw arrays
    std::iota(ids.begin(), ids.end(), stdArraySize); // fill the array with sequentially increasing values

    for (int i = 0; i < stdArraySize; i++)
    {
        std::cout << "ids position " << i << ": " << ids[i] << std::endl;
    }

    return 0;
}