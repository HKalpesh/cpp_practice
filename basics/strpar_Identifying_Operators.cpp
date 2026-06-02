#include<bits/stdc++.h>
using namespace std;

bool isanOperator(const string& token){
    //
    return (token=="+" || token=="-" || token=="*" || token=="/");
}
int main(){
        string token1="44+11";
        string token2= "33";
        string token3= "+";        
    cout<<"is "<<token1<<" an operator? "<<(isanOperator(token1) ? "Yes" : "No")<<endl;
    cout<<"is "<<token2<<" an operator? "<<(isanOperator(token2) ? "Yes" : "No")<<endl;
    cout<<"is "<<token3<<" an operator? "<<(isanOperator(token3) ? "Yes" : "No")<<endl;
        return 0;
    }