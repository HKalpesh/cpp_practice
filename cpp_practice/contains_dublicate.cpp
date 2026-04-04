/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,2,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }   
    if(s.size()<n){
        cout << "Contains Duplicate: " << n <<endl;
    }
    else{
        cout<<"No Duplicate"<<endl;
    }    return 0;




}
*/
#include <iostream>
#include<bits/stdc++.h>
// #include<vector>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};

int main(){
    Solution sol;
    
    // Example 1: Vector with duplicates
    vector<int> nums1 = {1, 2, 3, 1};
    vector<int> copy1 = nums1;  // Make a copy
    cout << "nums1 has duplicate: " << (sol.hasDuplicate(copy1) ? "true" : "false") << endl;
    
    // Example 2: Vector without duplicates
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> copy2 = nums2;  // Make a copy
    cout << "nums2 has duplicate: " << (sol.hasDuplicate(copy2) ? "true" : "false") << endl;
    
    // Example 3: Taking user input
    int n;
    cout << "\nEnter number of elements: ";
    cin >> n;
    cin.ignore();  // Clear input buffer
    
    vector<int> nums3(n);
    cout << "Enter " << n << " numbers (space-separated): ";
    for(int i = 0; i < n; i++){
        cin >> nums3[i];
    }
    
    vector<int> copy3 = nums3;  // Make a copy
    cout << "Input array has duplicate: " << (sol.hasDuplicate(copy3) ? "true" : "false") << endl;
    
    return 0;
}