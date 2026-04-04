#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool hashset_approach(vector<int>& nums){
    unordered_set<int> seen;
    // this for loop iterates through each element in nums means value of nums is assigned to num one by one
    for (int num:nums){// range based for loop
        if(seen.count(num)){
            return true ;
        }
        seen.insert(num);
    }
    return false;

}
int main(){
    vector<int> vec={1,2,4,3,2};
    hashset_approach(vec);
    cout<<"contains duplicate: "<< hashset_approach(vec)<<endl;
    return 0;
}