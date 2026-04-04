// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<vector>

bool contains_duplicate(vector<int>& nums){
    int n= nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int> ves={1,2,3};
    int ans =contains_duplicate(ves);

    if (ans){
        cout << "contains duplicate "<<endl;
    }
    else{
        cout<< " dont contain duplicate"<< endl;
    }
    return 0;
}