#include<bits/stdc++.h>
using namespace std;
int main (){
    int t ;
    int x,y;
    cin>>t;
    while(t--){
    cin>>x>>y;
    cout<<(x % 2 == 0 || y % 2 == 0 ?" yes":"no")<<endl;
    }
    return 0;
}