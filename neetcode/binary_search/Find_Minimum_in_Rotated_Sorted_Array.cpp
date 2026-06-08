#include<bits/stdc++.h>
using namespace std;
int findmin(vector<int> &nums){
    int isMin= *min_element(nums.begin(),nums.end());
    // cout<<isMin<<endl;
    return isMin;
}
int main(){
    vector<int> nums ={4,5,2,3};
    // int isMin= *min_element(nums.begin(),nums.end());
    int result = findmin(nums);
    cout<<result<<endl;
    return 0;
}