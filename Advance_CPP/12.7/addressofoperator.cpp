#include<iostream>
using namespace std;
int main(){
    int x{5};
    cout<<x<<"\n";// prints the value 
    cout<<&x<<"\n";// prints the memory address of variable x 
    cout<<*(&x)<<"\n";//dereference the memory address of x to get the value of x 
    return 0;
}