#include<bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int flag=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if (x==67){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}