#include<bits/stdc++.h>
using namespace std;

bool isvalid(string s){
    stack < char> stacktag;
    unordered_map<char ,char > closetopen={
        {')','('},
        {'}','{'},
        {']','['}
    };
    for(int i=0;i<s.length();i++){
        char current_tag= s[i];

        if(closetopen.count(current_tag)){
            if(stacktag.empty()|| stacktag.top()!=closetopen[current_tag]){
                return false;
            }
            stacktag.pop();

        }
        else{
            stacktag.push(current_tag);
        }

    }
    return stacktag.empty();
}

int main (){
    string s= ("(");
    isvalid(s)? cout<<"valid":cout<<"invalid";
    return 0;
}