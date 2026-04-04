#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int l=0;
    int r =nums.size()-1;
    // tar
    // int m=r/2;
    while (l<r){
        int cursum=nums[l]+nums[r];
        if (cursum>target){
            r--;
        }
        else if (cursum<target){
            l++;
        }
        else{
            return{l+1,r+1}; // Return 1-indexed positions
        }
    }
    return{};
    
        
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums={1,2,3,4};
    int target=3;
    vector<int> result = twoSum(nums,target);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}