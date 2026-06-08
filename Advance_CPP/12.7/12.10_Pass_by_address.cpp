#include<bits/stdc++.h>
using namespace std;

// pass by ref do not store the copy of the value it provides the acgtaul value 
// pass by ref is bound to the actual argument 
// ref parameter is const 
// we cant change ref 
// if ref was not the const we could be able to change the ref which will change the value its linked to 

// example on pass by ref 
/*
void printByRef(const string& ref){
    cout<<ref<<endl; // prints the value via ref 

}
int main (){
    string str="abc";
    printByRef(str);
    return 0;
}
*/

// pass by value just means i have a string str i will just pass this 
// the difference b/w pass by value and ref is in ref we deal with memeory address which is than ref 
// pass by value is the easy way but it sends a copy and not the actual value 

// example on pass by value 
/*
void passByValue(string value){
    cout<<value<<endl; // prints the copy of the value 
    
}
int main(){
    string value="abc";
    passByValue(value);
    return 0;
}
*/

// pass by address
// pass by address provide carry the address of the object via a pointer 
// for accessig the objects value the pointer can be dereferenced to access the value of the object 

// example on pass by address 
/*
void passByAddress(const string* ptr){// the function parameter is a pointer that holds the address of str 
cout<<*ptr<<endl; // prints the value via the dereferenced pointer 
}
int main(){
    string str="abc";
    passByAddress(&str);// pass str by address does not make a copy of str
    return 0;
}
*/

// pass by address allows the function to modify the argument's value 
// if the function parameter is a pointer to non-const fucnctino can modify the arfument via the pointer parameter 
/*
void changeValue(int* ptr){ // ptr is a non constant 
    *ptr=6; // change the value to the new value 
}
int main (){
    int val_change=5 ;
    cout<< "before change = "<<val_change<<endl;
    changeValue(&val_change);// we are passing the address of the function " & "
    cout<<"after change = "<<val_change<<endl;
    return 0;

}
*/

// const and non const ptr in function 
// best practice => use const type* ptr to protect the data 
// never use type* cont ptr this is unnecessary as making a pointer const is no benifit as the value of for the ptr in main will no be affected by the ptr in the function 

// null check 
/*
void print(int* ptr){
    if(ptr){ // this checks if ptr is not a null pointer 
    cout<<*ptr<< endl;
}
}
int main (){
    int x{5};
    print(&x);
    print(nullptr);
    return 0;
}
*/

// better way of checking the null pointer 
/*
void print(int* ptr){
    if(!ptr){ // early reatur back to the caller if its null
        cout<<"null pointer was seen "<<endl;
        return ; // if the code pass this line it means the ptr is safe and not null
    }
    cout<< *ptr<<endl;
}
int main(){
    int x{5};
    print(&x);
    print(nullptr);
    return 0;
}
*/

// Enforcing Preconditions with Assertions
/*
void print(const int* ptr ){
    assert(ptr);// fails the program in debug mode if a null pointer is passed 
    // optionally handle htis as an error case in productino mode so we dont crash if it daes happen 
    if(!ptr) return ;
    cout<<*ptr<<endl;
}
int main(){
    int x{5};
    print(&x);
    print(nullptr);
    return 0;
}
*/

// Prefer pass by (const) reference
// in case of just effectively aborting the function why let the user pass a null pointer at all 
// pass by ref has the same benifit as pass by address without the risk of inadvertently dereferencing a null pointer 


// this code shows how the rvalue cannnot be taken as input for ptr , ptr should have a initial means it should be declared before using the pointer 
/*
void printByValue(int val){
    cout<<val<<endl; //this pass a simple value by coping it 
}
void printByRef(const int& ref){
    cout<<ref<<endl;
}
void printByAddress(const int* ptr){
    cout<<*ptr<<endl;
}
int main(){
    printByValue(5);
    printByRef(5); // valid because the parameter is a const ref 
    // printByAddress(&5); // error: cant take address of rvalue 
    return 0;

}
*/




