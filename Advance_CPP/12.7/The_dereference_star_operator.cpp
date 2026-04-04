#include <iostream>

int main()
{
    int x{5};
    std::cout << x << '\n';  // print the value of variable x
    std::cout << &x << '\n'; // print the memory address of variable x

    std::cout << *(&x) << '\n'; // print the value at the memory address of variable x (parentheses not required, but make it easier to read)

    return 0;
}
output
    // 5 value of variable x
    // 0x61ff0c memory address of variable x
    // 5 value at the memory address of variable x (dereferenced value of variable x)