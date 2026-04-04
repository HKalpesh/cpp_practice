// the below code is works in the O(n) time and O(1) space complexity

#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    // vector<int>prefix(n,1);
    // vector <int> suffix(n,1);
    vector<int> product(n,1);
    for (int i =1;i<n;i++){
        // prefix[i]=prefix[i-1]*nums[i-1]
        product[i]=product[i-1]*nums[i-1];

        
    }
    int suffix=1;
    for(int i=n-2;i>=0;i--){
        // suffix[i]=suffix[i+1]*nums[i+1]
        suffix*=nums[i+1];
        product[i]=suffix;
       
    }
    /*
    for(int i=0;i<n;i++){
        product[i]=prefix[i]*suffix[i];
    }
    */
    
    return product;
}
int main(){
    vector<int> vec={1,2,3,4};
    vector<int> result = productExceptSelf(vec);
    for(int val : result) {
        cout << val << " "<<endl;
    }

    return 0;
    
}
