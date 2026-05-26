#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool hasDuplicate(vector<int>& nums) {
        for (int i =0; i<nums.size();i++){
            for(int j=i+1; j< nums.size();j++){
                if(nums[i] == nums[j]){
                    return true ;
                }
            }
        }
        return false;
    }

    int main (){
        vector<int> nums={1,2,3,3};
    cout << boolalpha << hasDuplicate(nums) << endl; // true/false
        return 0;
    }