#include<bits/stdc++.h>
using namespace std;

int evalRPN(vector<string>& tokens){
    stack<int>stk;
    for(const string& c:tokens){
        if(c=="+"){
            int a= stk.top(); stk.pop();
            int b= stk.top(); stk.pop();
            stk.push(b+a);
        }
        else if(c=="-"){            
            int a= stk.top(); stk.pop();
            int b= stk.top(); stk.pop();
            stk.push(b-a);
        }
        else if(c=="*"){            
            int a= stk.top(); stk.pop();
            int b= stk.top(); stk.pop();
            stk.push(b*a);
        }
        else if(c=="/"){            
            int a= stk.top(); stk.pop();
            int b= stk.top(); stk.pop();
            stk.push(b/a);
        }
        else{
            stk.push(stoi(c));
        }
    }
        return stk.top();

}
int main(){
    vector<string> tokens={"1","2","+","3","*","4","-"};
    int result = evalRPN(tokens);
    cout<<result<<endl;
    return 0;
}