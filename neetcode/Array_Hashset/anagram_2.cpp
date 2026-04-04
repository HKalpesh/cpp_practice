//using hash set
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool is_anagram(string s,string t){
    unordered_map<char,int> countS;
    unordered_map<char ,int>countT;
    for (int i=0;i<s.length();i++){
        countS[s[i]]++;// racecar
        countT[t[i]]++;// carrace
    }
    return countS == countT;
}
int main(){
    string s="racecar";
    string t="carrace";
    if(s==t){
    cout<< "is anagram"<< is_anagram(s,t)<<endl;

    }
    else{
        cout<< "not an anagram"<<endl;
    }
    return 0;
}