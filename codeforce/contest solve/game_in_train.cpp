#include<bits/stdc++.h>
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> h(n);
        for(int i=0;i<n;i++) cin>>h[i];
        sort (h.begin(),h.end());
        int add1=h.back()+1;
        // cout<<add1<<endl;
        int shortest=add1-h[0];
        cout<<shortest<<endl;
    }
    return 0;

}