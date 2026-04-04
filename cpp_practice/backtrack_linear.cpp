#include<bits/stdc++.h>
using namespace std;

void backtrack_linear(int i, int n){
    if (i<1){
        return;
    }
    backtrack_linear(i-1,n);
    cout<<i<<endl;
        
}
int main(){
    int n=4;
    backtrack_linear(n,n);
}