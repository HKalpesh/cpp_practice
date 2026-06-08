#include<bits/stdc++.h>
using namespace std;

// Pass by address for “optional” arguments
/*
void printIdNo(const int *id=nullptr){
    if(id) cout<<"is a id= "<<*id<<endl;
    else cout<<"null id"<<endl;
}
int main(){
    printIdNo(); // empty it declare it as nullptr
    int userid{32};
    printIdNo(&userid);
    return 0;
}
*/

// function overloading 
// This has a number of advantages: we no longer have to worry about null dereferences, and we can pass in literals or other rvalues as an argument.
/*
void printIDNO(){
    cout<<"no id"<<endl;
    }
void printIDNO(int id){
    cout<<"your id = "<<id<<endl;
}
int main (){
    printIDNO();
    int userid=38;
    printIDNO(userid);
    return 0;
}
*/

// Changing what a pointer parameter points at
// When we pass an address to a function, that address is copied from the argument into the pointer parameter (which is fine, because copying an address is fast).

/*
void nullify([[maybe_unused]] int* ptr2 ){
    ptr2= nullptr;
    cout<<&ptr2<<endl;
}
int main (){
    int x {5};
    int* ptr{&x};
    cout<<&ptr<<endl;
    cout<<"ptr is "<<(ptr?"non-null \n":"null \n");

    nullify(ptr);
    cout<<"ptr is "<<(ptr?"non-null\n":"null\n");
    return 0;
}
*/

// Pass by address… by reference?
// it just mean we can also use pass by pointer by ref 
// Because refptr is now a reference to a pointer, when ptr is passed as an argument, refptr is bound to ptr. This means any changes to refptr are made to ptr.
/*
void nullify(int*& refptr){
    refptr = nullptr;
}
int main (){
    int x{5};
    int* ptr{&x};
    cout<<"ptr is "<<(ptr ? "non-null\n":"null\n");
    nullify(ptr);
    cout<<"ptr is "<<(ptr ? "non-null\n":"null\n");
    return 0;
}
*/







