#include <iostream>
int main()
{
    int x{5};
    // note both ref and *ptr are lvalue objects that can be assigned to, so we can change the value of x through either of them
    int &ref{x};                           // ref is a reference to x
    int *ptr{&x};                          // ptr is a pointer to x
    std::cout << x << ref << *ptr << '\n'; // print the value of x, ref and the value at the address being pointed to (which is x)
    ref = 6;                               // ref to change the value of x
    std::cout << x << ref << *ptr << '\n'; // print the changed value of x, ref and the value at the address being pointed to (which is x)
    *ptr = 7;                              // *ptr to change the value of x
    std::cout << x << ref << *ptr << '\n'; // print the changed value of x, ref and the value at the address being pointed to (which is x)
    return 0;
}
// output
// 555
// 666
// 777