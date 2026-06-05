#include<bits/stdc++.h>
using namespace std;
// >>>>>>>>>>>>>>>>>......1 the address of operator (&)
//& operator returns memory address of the operand 
/*#include <iostream>
using namespace std;
int main (){
    int x{5};
    cout<<x<<endl;//print the value of variable x means 5
    cout << &x <<endl;// print the memory address of variable x 
    return 0;
}
*/

// >>>>>>>>>>>>>>>>>>>.....2 dereference operator (*)
// retutn the value at a given memory address as a lvalue 
// " * " is also known as indirection operator 
/*
#include<iostream>
using namespace std ;
int main (){
    int x{5};
    cout << x<< endl;
    cout<<&x<<endl; // print the memory address of variable x 
    cout<<*(&x)<<endl; // print the value at the memory address of variable x () is optional 
    return 0;
}
*/

//>>>>>>>>>>>>>>>>>>........3 pointer 
//This allows us to store the address of some other object to use later.
//>>>>>>>>>>>>> pointer initilization
//>>>>>> ptr type 
/*
int main(){
    int x{4};
    int* ptr; // uninitialized pointer (holdes garbage address )
    int* ptr2{}; // a null pointer 
    int* ptr3{&x};// a pointer initilized with the address of variable x 
    return 0;
}
*/
//>>>>>>>>> 4 pointer
/*
int main(){
    int x{5};
    cout<<x<<endl;
    int* ptr{&x}; // ptr holds the address of x 
    cout<< *ptr<<endl;// use the dereference operator to print the value at the address that ptr is holding (x's address)
    return 0;
}
*/
// the type of reference should match the type of object that its pointnig to
//>>>> ""int"" should point ""int"" and ""double"" should not point ""int"" or ""int"" should not point ""double"" 

//>>>>>>>>>>>>>>>> 5 pointer and assignment 
//>> 2 use of assignment 
//>>> I) to change what the ptr is pointing at (by assigning the pointer a new address)
//>>> II) to change the value being pointed at ( by assigning the dereference pointer a new value )
//>>>>> I
/*
int main(){
    int x{5};
    int* ptr {&x}; // ptr initialized to point at x 
    cout<< *ptr<<endl; // print the value at the address being pointed to(x's address)
    int y{8};
    ptr=&y;// change the value of pointer now pointing to => y
    cout<<*ptr<<endl;// print the value at the address being pointed to (y's address)
    return 0;
}
*/
//>>>>>>>> II
/*
int main(){
    int x{3};
    int* ptr{&x};// initialize the ptr with address of var x 
    cout<<x<<endl;// this print the value of x
    cout<<*ptr<< endl;// print the value at the address that ptr is holding (x's address)
// because *ptr works as a lvalue we can use it at left side to assign the value to it 
    *ptr=6;
    cout<<x<<endl;
    cout<<*ptr<<endl;//print the value at the address that the ptr is holding (x's address)
    return 0;
}
*/
// >>>>>>>>>> 6 Pointers behave much like lvalue references
/*
int main(){
    int x{5};
    int& ref{x};// get ref to x
    int* ptr{&x};// get ptr to x
    
    cout<<x; // print the value of x 
    cout<<ref;// use the ref to print x's value(5)
    cout<<*ptr<<endl; // use the ptr to print x's value (5)
    
    ref =6; // change the value of x using ref 
    cout<<x;
    cout<<ref;// ref to print x's value now (6)
    cout<<*ptr<<endl; // print the changed x value using ptr now (6)
    
    *ptr =7;
    cout<<x; // print the value of x 
    cout<<ref;// print the new value by using ref now (7)
    cout<<*ptr<<endl; // using ptr to print the changed value now (7)
    return 0;
    
}
*/
//.................
/*
>>>>>>>There are some other differences between pointers and references worth mentioning:

>References must be initialized, pointers are not required to be initialized (but should be).
>References are not objects, pointers are.
>References can not be reseated (changed to reference something else), pointers can change what they are pointing at.
>References must always be bound to an object, pointers can point to nothing (we’ll see an example of this in the next lesson).
>References are “safe” (outside of dangling references), pointers are inherently dangerous (we’ll also discuss this in the next lesson).
*/
//>>>>>>>>>> 7 The address-of operator returns a pointer
// >>>> int x , &x returns int* holding the address of x 
/*
int main(){
    int x{4};
    cout<<typeid(x).name()<<endl; // prints the type of x => int or i
    cout<<typeid(&x).name()<<endl;// print the type of &x => int* or pi
    return 0;
}
*/
//>>>>>>>>>>>> 8 The size of pointers
// 
/*
int main(){
    char* chptr{}; // char are 1 byte
    int* iptr{}; // int are usually 4 bytes
    long double* ldptr{}; // ld are usually 8 or 12 bytes 
    
    cout<<sizeof(chptr)<<endl; // prints 4
    cout<<sizeof(iptr)<<endl; // prints 4
    cout<<sizeof(ldptr)<<endl; // prints 4
    return 0;
    // pointer is same because its a memory address and no. of bits needed to access a mem addeess is constant for a pointer 
}
*/
// >>>>>>>>>>>>>> 9 Dangling pointers
// holding the address of an object that has been destroyed or deallocated
/*
int main(){
    int x{5};
    int* ptr{&x};
    cout << *ptr<<endl;// valid
    {
        int y{6};
        ptr=&y;
        cout<<*ptr<<endl;//valid 
    }
    // as the y is out of scope now that means the ptr is dangling 
    cout<< *ptr <<endl;// undefined behaviour from dereferencing a dangling pointer 
}
*/

//<<<<<<<<<<<<<<<<<<<<<<<<< QUESTION >>>>>>>>>>>>>>
// >>>>>>>>>>>>>>    1        <<<<<<<<<
/*
int main (){
    short value{7};
    short othervalue{3};

    short* ptr{&value}; //holdes the memory address of that value 

    cout<<&value <<endl;// prints the memroy address 
    cout<<value<<endl; // prints the value =>7
    cout<<ptr<<endl; // prints the memory address of the value 
    cout<<*ptr<<endl;// prints the value => 7
    cout<<endl;

    *ptr=9;
    cout<<&value<<endl; // prints the memory address 
    cout<<value <<endl; //print the new value =>9
    cout<<ptr<<endl; // prints the memory 
    cout<< *ptr<<endl;// prints the new value =>9
    cout<<endl;

    ptr=&othervalue;// changing the pointer pointing to the new value => othervalue

    cout<<&othervalue<<endl;//memory address
    cout<<othervalue<<endl;//value
    cout<<ptr<<endl;//memory address;
    cout<<*ptr<<endl;//value
    cout<<endl;

    cout<<sizeof(ptr)<<endl;// 4 bytes
    cout<<sizeof(*ptr)<<endl;// 2 bytes
    return 0;

}
*/