#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

 vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> rev;
    for (string s:strs){
         string key=s;
         sort(key.begin(),key.end());
         rev[key].push_back(s);
    }
    vector <vector<string>> result;
    for (auto& pair:rev){
          result.push_back(pair.second);
    }
    cout<<"Grouped Anagrams are: "<<endl;
    for (auto v:result){ 
        for (auto str:v){
            cout<<str<<" ";
        }
        cout<<endl;
    }
    return result;
    
}
int main(){
     vector<string> grp_ana={"act","pots","tops","cat","stop","hat"};
     groupAnagrams(grp_ana);
     return 0;
}