#include<bits/stdc++.h>
using namespace std;
// a special value which has no value ,when a pointer holding a null value it means the pointer is not pointing at anyting 
/*
int main(){
    int* ptr{};// ptr is now a null pointer , and is not holding an address 
    return 0;
    
}
*/

// >>>>>> pointing something using null pointer 

/*
int main(){
    int* ptr {};// null pointer holding no mem address 

    int x{5};
    ptr=&x;// pointer now pointing at x no more null pointer 

    cout<< *ptr<<endl;// prints the value of x through deref ptr 
    return 0;
}
*/

//>>>>>>>>>>>>>>>>> 1 The nullptr keyword
// using nullptr we can explicitly initilize or assigne a pointer a null value 
/*
int main(){
    int* ptr{nullptr};// can use nullptr to initilize a ptr to be a nullptr 
    int value{5};
    int* ptr2{&value}; // pointer pointing at the memory address of value 
    cout<<*ptr2<<endl;// printing the value using ptr 
    ptr2= nullptr; // assigining a working pointer as a nullptr

    //someFunction(nullptr);// we can also pass nullptr to a function that has a pointer parameter 

}
*/

//>>>>>>>>>> 2 Dereferencing a null pointer results in undefined behavior
/*
int main(){
    int* ptr{};// creating a null ptr 
    cout<<*ptr<<endl;//dref the null ptr
    // returns nothing 
    return 0;
}
*/

//>>>>>>>>>>>>>>> 3 Checking for null pointers
/*
int main(){
    int x{5};
    int* ptr{&x};
    if(ptr==nullptr) // explicit test for equivalence 
    cout<<"ptr is null\n";
    else
    cout<<"ptr is non_null\n";
    int* nullPtr{};
    cout<<"nullPtr is"<<(nullPtr==nullptr ? "null\n":"non-null\n");// explicit test for equivalence 
    return 0;
}
*/

//>>>>>>> using boolean value to return true or false for null or not-null
/*
int main(){
    int x{5};
    int* ptr{&x};
    // ptr convert to boolean flase if they are null and true if thry are not null 
    if(ptr) 
    cout<<"ptr is null\n";
    else
    cout<<"ptr is non_null\n";
    int* nullPtr{};
    cout<<"nullPtr is"<<(nullPtr ? "null\n":"non-null\n"); // implicit conversion to boolean 
    return 0;
}
*/

// >>>>>>>>>>>>>>>>>>>>> 4 Use nullptr to avoid dangling pointers
// checking for a null pointer and if not than deref is safe 
// if the pointer is do something other that deref 

// Assume ptr is some pointer that may or may not be a null pointer
/*
if (ptr) // if ptr is not a null pointer
std::cout << *ptr << '\n'; // okay to dereference
else
// do something else that doesn't involve dereferencing ptr (print an error message, do nothing at all, etc...)
*/
//>>>>>>>>>>>>>>>> 5 Legacy null pointer literals: 0 and NULL
// if a pointer is uninitialized than giving it a value = 0 or value = NULL
/*
int ptr;// unintialized 
ptr=0 or null is wrong
ptr= nullptr is a safe and correct way
*/
// its considered not safe 
// using nullptr is a best practice to assign a null value to a ptr 

// <<<<<<<<<<<<<<<<<<<<< QUESTION >>>>>>>>>>>>>>>>>>>

// 1a) Can we determine whether a pointer is a null pointer or not? If so, how?
// => by using if else or by boolean 

// 1b) Can we determine whether a non-null pointer is valid or dangling? If so, how?
// => no easy way to determine this

// >>>>>>>>>>>>  Question #2
// 2a) Assigning the address of an object to a non-const pointer
// => This just copies the address into the pointer object.

// >>>>>>>>>>>>>>>>>>>>>  Question #3
// Why should we set pointers that aren’t pointing to a valid object to ‘nullptr’?
/*We can not determine whether a non-null pointer is valid or dangling, and accessing a dangling pointer will result in undefined behavior. Therefore, we need to ensure that we do not have any dangling pointers in our program.

If we ensure all pointers are either pointing to valid objects or set to nullptr, then we can use a conditional to test for null to ensure we don’t dereference a null pointer, and assume all non-null pointers are pointing to valid objects.
*/



