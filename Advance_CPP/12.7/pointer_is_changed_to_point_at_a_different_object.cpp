#include <iostream>
int main()
{
    int x{5};
    int *ptr{&x};              // pointer initilize to point at x
    std::cout << *ptr << '\n'; // print the value of address being pointed to thats 'x'

    int y{6};
    ptr = &y;                  // change pointer pointing to y
    std::cout << *ptr << '\n'; // print the value of address beign pointed to thats 'y'
    return 0;
}
// output
// 5 value of pointer pointing at the address of variable x (dereferenced value of pointer ptr)
// 6 value of pointer pointing at the address of variable y (dereferenced value of pointer ptr)