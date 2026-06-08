#include <bits/stdc++.h>
using namespace std;

int findmin(vector<int> &nums){
    int left =0 ;
    int right = nums.size()-1;
    while(left< right){
        // cout<<"left: "<<left<<" right: "<<right<<endl;
        int mid= left+((right-left)/2);
        // cout<<"mid: "<<mid<<endl;
        if(nums[mid]>nums[right]){
            left= mid+1;
        }
        else{
            right= mid;
        }
    }
    return nums[left];
}
int main(){
    vector<int> nums ={3,4,2};
    int result = findmin(nums);
    cout<<result<<endl;
    return 0;
}