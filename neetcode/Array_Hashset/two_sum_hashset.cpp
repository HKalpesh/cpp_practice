#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> hashing_twosum(vector<int>& nums,int target){
    unordered_map<int,int> phonebook;
    for (int i=0;i<nums.size();i++){
        phonebook[nums[i]]=i;
    }
    
    for (int i=0;i<nums.size();i++){
        int diff=target-nums[i];
        if (phonebook.count(diff) && phonebook[diff]!=i){
            return {i,phonebook[diff]};     

        }
        
    }
    return {};
}

int main(){
    vector<int> vec={1,5,3,6,2};
    int target=7;
    vector<int> ans=hashing_twosum(vec,target);
    cout<<"two sum"<<ans[0]<<" and "<<ans[1]<< endl;

}