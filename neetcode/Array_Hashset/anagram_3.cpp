//using hash table
#include<iostream>
using namespace std;

bool is_anagram(string s ,string t){
    vector<int> count(26,0);
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for (int val:count){
        if(val!=0){
            return false;
        }
    }
    return true ;
}
int main(){
    string s="racecar";
    string t ="carrace";
    if (s==t){
        cout<< "is anagram"<< is_anagram(s,t)<<endl;
    }
    else{
        cout<< "is not anagram"<< endl;
    }
    return 0;
}