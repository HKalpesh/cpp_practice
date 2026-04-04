#include <iostream>
int main(){
    int x {5};
    int* ptr{&x}; // initilize pointer pointing at x
    std::cout<<x<<'\n'; // print value of x
    std::cout<<*ptr<<'\n';// print value of the address being pointed to

    // note *ptr is an lvalue object that can be assigned to, so we can change the value of x through the pointer
    *ptr=6; // The object at the address held by ptr (x) assigned value 6 (note that ptr is dereferenced here)
    std::cout<<x<<'\n';// printing the changed value of x
    std::cout<<*ptr<<'\n';// print the changed value of the address being pointed to (which is x)
    return 0;

}
// output
// 5
// 5
// 6
// 6