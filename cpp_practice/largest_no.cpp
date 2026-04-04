// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &nums)
{
    int maxval = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] > nums[maxval])
        {
            maxval = j;
        }
    }
    return nums[maxval];
}
int main()
{
    vector <int> arr = {1, 4, 3, 2, 5};
    largestElement(arr);
    cout << "Largest element is " << largestElement(arr) << endl;
}