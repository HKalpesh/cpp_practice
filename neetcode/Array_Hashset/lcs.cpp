#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    int n=nums.size();
    unordered_map<int ,int> dup;
    for (auto& i:nums){
        dup[i]++;
    }
    cout<<"The size of the map is : "<<dup.size()<<endl;
    int count=0;
    for (int i=0;i<n;i++){
        if (dup.find(nums[i]-1)==dup.end()){
            int curr=nums[i];
            int curr_count=1;
            while (dup.find(curr+1)!=dup.end()){
                curr++;
                curr_count++;
            }
            count=max(count,curr_count);
        }
    }
    return count;

}
int main (){
    vector <int >nums={100,4,200,1,3,2};
    int result=longestConsecutive (nums);
    cout<<"The length of the longest consecutive elements sequence is: "<<result<<endl;
    return 0;
} 