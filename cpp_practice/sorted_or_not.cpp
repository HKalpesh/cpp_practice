#include<iostream>
#include<vector>

using namespace std;

bool isSorted(vector<int>& nums){
    int i =0;
    int n= nums.size();
    for(int j=1;j<n;j++){
        if(nums[i]<nums[j]){
            i=j;            
        }
    }
    return ;//sorted 
}
int main(){
    vector<int> vec={1,3,2,5,4};
    bool ans=isSorted(vec);
    if (ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}
