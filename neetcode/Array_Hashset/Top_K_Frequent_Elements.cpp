#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int >count ;
    for (int num:nums){
        count[num]++;//this see's into the array nums and it assign the  frequency of appearence in that array 
          /*If nums = [1, 2, 1, 3]: 
          Iterate 1: num is 1. count[1] becomes 1.
          Iterate 2: num is 2. count[2] becomes 1.
          Iterate 3: num is 1. count[1] becomes 2.
          Iterate 4: num is 3. count[3] becomes 1. */
    }  
    vector<pair<int,int>>arr;
    for (const auto& p:count){
        arr.push_back({p.second,p.first});
    }
    sort(arr.rbegin(),arr.rend());

    vector <int >res;
    for (int i=0;i<k;++i){
        res.push_back(arr[i].second);
    }
    return res;
}
int main (){
    vector <int >nums={1,1,1,2,2,3,3,2,2,3,4,4,56,56,56,7,7,7,5,4,4,3,3,2,2,1,1,1};
    int k=3;
    vector <int >result=topKFrequent (nums,k);
    cout<<"Top "<<k<<" frequent elements are: ";
    for (int num:result){
        cout<<num<<" ";
    }
    return 0;
}