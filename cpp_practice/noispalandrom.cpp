#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int palandrom_num(int n){
    int rev=0;
    int duplicate=n;

    while(n>0){
        int lastdig=n%10;
        rev=rev*10+lastdig;
        n=n/10;

    }
    if (duplicate==rev){
        return true;
    }
    else {
        return false;
    }

}
  int main(){
    int N=121;
    if (palandrom_num(N)){
        cout<< "is a palandrom"<<endl;
    }
    else{
        cout<<"is not a plandrom"<<endl;
    }
//    int dig=palandrom_num(N);
//    cout<< "palandrom="<< dig;
    return 0;
  }