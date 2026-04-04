#include <iostream>

int main()
{
    int x{5};
    std::cout << x << '\n'; // print the value of variable x

    int *ptr{&x};              // ptr holds the address of x
    std::cout << *ptr << '\n'; // use dereference operator to print the value at the address that ptr is holding (which is x's address)

    return 0;
}
// output
// 5 value of variable x
// 5 value of pointer pointing at the address of variable x (dereferenced value of pointer ptr)
