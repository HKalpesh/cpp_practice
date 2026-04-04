#include<bits/stdc++.h>
using namespace std;
void reverse_n_f(int i ,int n){
    if (i<1){
        return;

    }
    cout<<"reverse n: "<< i<<endl;
    reverse_n_f(i-1,n);
}
int main (){
    int n=4;
    reverse_n_f(n,n);
    //we only called n cause we need to print in reverse and so i should be the same size of the n to pint reverse order n 
}