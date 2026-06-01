#include<bits/stdc++.h>
using namespace std;

int main (){
    unordered_map<string , string > matching_map={
        {"right", "left"},
        {"top", "bottom"},
        {"end", "start"}
    };
    string test_key= "top";
    if(matching_map.count(test_key)){
        string corosponding_val=matching_map[test_key];
        cout<<"the match map"<<test_key<<" is "<<corosponding_val<<endl;
    }
    return 0;

}