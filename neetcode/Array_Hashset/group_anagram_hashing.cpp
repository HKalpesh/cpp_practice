#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> res;
    for (auto &s : strs)
    {
        vector<int> count(26, 0);
        for (char c : s)
        {
            count[c - 'a']++;
        }
        string key = to_string(count[0]);
        for (int i = 0; i < 26; i++)
        {
            key += ',' + to_string(count[i]);
        }
        res[key].push_back(s);
    }
    vector<vector<string>> result;
    for (const auto &pair : res)
    {
        result.push_back(pair.second);
    }

    return result;
}
int main()
{
    vector<string> grp_ana = {"act", "pots", "tops", "cat", "stop", "hat"};
    cout<<"group anagrams: "<<endl;
    vector<vector<string>> result = groupAnagrams(grp_ana);
    for (const auto &group : result)
    {
        cout << "[";
        for (size_t i = 0; i < group.size(); ++i)
        {
            cout << group[i];
            if (i < group.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}