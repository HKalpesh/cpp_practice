#include <iostream>

int main() // assume a 32-bit application
{
    char *chPtr{};        // chars are 1 byte
    int *iPtr{};          // ints are usually 4 bytes
    long double *ldPtr{}; // long doubles are usually 8 or 12 bytes

    std::cout << sizeof(chPtr) << '\n'; // prints 4
    std::cout << sizeof(iPtr) << '\n';  // prints 4
    std::cout << sizeof(ldPtr) << '\n'; // prints 4

    return 0;
}
// output
// the size of a pointer is the same regardless of the type it points to
// 4
// 4
// 4