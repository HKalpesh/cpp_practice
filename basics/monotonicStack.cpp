#include<bits/stdc++.h>
using namespace std;

vector<int > nextGreaterElement(vector<int>& nums){
    int n= nums.size();
    // letting the value of array be -1 
    vector<int> result(n,-1);
    // the stack will store indices not the actuall numbers 
    stack <int > st;

    for(int i =0;i<n;i++){
        // if the stack is not empty and the current number is greater than the top of the stack
        while(!st.empty() && nums[i]>nums[st.top()]){
            //pop the top and assign that to a new variable
            int pop_small=st.top();
            // pop the top of the stack
            st.pop();
            // assign the current number to the result of the popped index
            result[pop_small]=nums[i];
        }
        // if the stack is empty or is smaller then the top 
        st.push(i);
    }
    return result;
}

int main (){
    vector<int> nums={4,5,2,10,8};
    vector<int> result= nextGreaterElement(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}