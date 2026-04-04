// by sorting approach 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_anagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if (s==t){
        return true;
    }
    return false;
}
int main(){
    string t="carracr";
    string s="racecar";
    is_anagram(s,t);
    cout <<"is anagram"<< is_anagram(s,t)<<endl;
    return 0;
}