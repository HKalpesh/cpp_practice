#include<bits/stdc++.h>
using namespace std;
int main(){
    int x{6};

    int* ptr;// uninitialized pointer , holdes a garbege value 
    cout<<ptr<<endl;
    int* ptr2{};// a null pointer 
    cout<<ptr2<<endl;
    int* ptr3(&x);// a pointer that holds the address of varialbe x
    cout<<*ptr3<<endl;
    return 0; 
}