#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int magic_no=3, add_no=4;
        while(true){
            if(n%magic_no==0){
                cout<<n/magic_no<<endl;
                break;
            }
            magic_no=magic_no+add_no;
            add_no=2*add_no;
        }
    }
    return 0;
}