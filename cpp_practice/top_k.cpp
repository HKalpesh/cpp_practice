// #include<bit/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int remv_dup(vector<int>&arr,int n){
    int i = 0;
    for (int j=1;j<n;j++){
        if (arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main (){
    vector<int>arr={1,1,2,2,3,4,4,5};
    int n=arr.size();
    n=remv_dup(arr,n);
    for (int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    
}