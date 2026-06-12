#include<bits/stdc++.h>
using namespace std;
int main (){
    // i need to to get a array of intiger n 
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        arr[0]++;
        int prod=1;
        int tot_p=1;

        for (int i = 0; i < n; i++)
        {
            prod=prod*arr[i];
        }
        cout<<prod<<endl;
    }

}