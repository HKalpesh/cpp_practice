#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n ;
    long long function;
    cin>>n;
    
    if(n%2!=0){
        function = -((n+1)/2);
        cout<<function<< endl;
    }
    else{
        function=n/2;
        cout<<function<< endl;
    }
    return 0;

}