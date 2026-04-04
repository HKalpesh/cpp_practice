#include<bits/stdc++.h>
using namespace std;

void one_to_n_linearly(int i,int n){
    if (i>n){
        return;
    }
    cout<< "linear way: "<<i<<endl;
    one_to_n_linearly(i+1,n);
}
int main(){
    int i,n;
    cout<< "enter no of i"<<endl;
    cin>>  i;
    cout<< "enter no of n"<<endl;
    cin>>  n;
    one_to_n_linearly(i,n);
}