#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// using namespace std;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=1;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j]== target){
                    return {i,j};
                }
            }
        }
    }
};
