#include<bits/stdc++.h>
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s(n,'0');
        cin>>s;
        //1010
        bool flag=true;
        for(int i=0;i<k;i++){
            int count=0;
            for(int j=i;j<n;j+=k){
                if(s[j]=='1') count++;
            }
            if(count%2!=0){
                flag=false;
                break;
            }
            else {
                flag=true;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;}
    return 0;
}