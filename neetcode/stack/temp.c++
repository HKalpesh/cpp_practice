#include <bits/stdc++.h>
using namespace std;

vector<int> dailytemp(vector<int> &temp)
{
    //  this creats an array of exact size of the temp and is prefilled with zeros
    vector<int> result(temp.size(), 0);
    // this will hold the value of temp when pushed and the index of that temp value
    stack<pair<int, int>> stk; // pair <temp, index>
    for (int i = 0; i < temp.size(); i++)
    {
        // we pre assign the value of temp to the t for further use
        int t = temp[i];

        while (!stk.empty() && t > stk.top().first)
        {
            // auto means the system will look and accordingly choose the datatype
            auto pair = stk.top(); // this stores the
            stk.pop();             // pop the smallest number which was at the stack top
            // pair. second means the index as we have created stack where we save in pair
            // pair.first = temp , and pair.first= index
            result[pair.second] = i - pair.second;
        }
        stk.push({t, i});
    }
    return result;
}
int main()
{
    vector<int> temp = {30, 40, 20, 10, 40, 20, 50};
    vector<int> result = dailytemp(temp);
    for (int i = 0; i < temp.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
// the output shows how the number of days it will take for the temperature to rise for each day in the input array. For example, for the first day with a temperature of 30, it will take 1 day for the temperature to rise to 40. For the second day with a temperature of 40, it will take 5 days for the temperature to rise to 50. For the third day with a temperature of 20, it will take 2 days for the temperature to rise to 40. And so on.
// 1
// 5
// 2
// 1
// 2
// 1
// 0