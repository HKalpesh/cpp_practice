//without sort
#include<iostream>
#include<vector>

using namespace std;

int secondLargestElement(vector<int>& nums) {
    int i =0;
    int secondlarg=0;
    for (int j=1;j<nums.size();j++){
        if (nums[i]<nums[j]){
            i=j;
        }
    }
    for (int j=0;j<nums.size();j++){
        if (nums[j]>secondlarg && nums[j]!=nums[i]){
            secondlarg=nums[j];
        }
    }

    return secondlarg==INT8_MIN ? -1:secondlarg;// Syntax: condition ? value_if_true : value_if_false
}

int main(){
    vector<int> vec={1,4,5,3,7};// sec larg is 5 larg is 7
        int ans = secondLargestElement(vec);
        cout<<"second largest: "<< ans <<endl;
        return 0;
    }