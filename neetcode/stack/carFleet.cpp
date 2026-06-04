#include <bits/stdc++.h>
using namespace std;

int carFleet(int target, vector<int> &position, vector<int> &speed)
{
    // Creating a vector to store position and speed together
    vector<pair<int, int>> pair;
    for (int i = 0; i < position.size(); i++)
    { // Fixed typo: postion -> position
        // Pushing position and speed into the pair at the back
        pair.push_back({position[i], speed[i]});
    }
    // Sort cars from closest to farthest from the target
    sort(pair.rbegin(), pair.rend());

    // Using a vector as a fully functional stack to track fleet times
    vector<double> stack;
    for (auto &p : pair)
    {
        // Calculating the solo time it takes to reach the target
        stack.push_back((double)(target - p.first) / p.second);

        // Check if there are at least 2 cars, and if the car behind (stack.back())
        // takes less or equal time than the car directly ahead of it
        if (stack.size() >= 2 && stack.back() <= stack[stack.size() - 2])
        {
            // Remove the car behind from the stack because it joins the fleet ahead
            stack.pop_back();
        }
    }
    // The remaining elements are the distinct fleet leaders
    return stack.size();
}
int main (){
    int target = 12;
    vector<int> position={10, 8, 0, 5, 3};;
    vector<int> speed={2, 4, 1, 1, 3};
    cout<<carFleet(target,position,speed)<<endl;
    return 0;
}