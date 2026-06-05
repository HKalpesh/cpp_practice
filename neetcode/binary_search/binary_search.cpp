#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& num,int target){
    int st=0;
    int end=num.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(target>num[mid]){
            st=mid+1;
        }
        else if(target<num[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> nums={1,2,3,4,5,23};
    int target =58;
    int result= search(nums,target);
    cout<<result<<endl;
    return 0;
}