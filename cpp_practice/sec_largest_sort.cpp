// using sort method
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secondLargestElement(vector<int> &nums)
{
    // sorting
    sort(nums.begin(), nums.end());

    // size
    int n = nums.size();
    // to get the last second last element
    return nums[n - 2];
}
int main()
{
    vector<int> ves = {5, 4, 3, 2, 6};
    int ans = secondLargestElement(ves);
    cout << "second largest: " << ans << endl;
    return 0;
}