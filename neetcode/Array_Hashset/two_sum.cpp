// my approach to two sum problem
#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

vector<int> twosum(vector<int>& nums,int target){
    // int target;
    for (int i = 0;i<nums.size();i++){
        for (int j = i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}
int main(){
    vector<int> ves={3,4,5,6};
    int target=7;
    vector<int> ans=twosum(ves,target);
    // int target=7;
    if (ans.size() == 2){
        cout<< "satisfies" << endl;

    }
    else{
        cout<< "dont satisfies"<< endl;
    }
    return 0;
}