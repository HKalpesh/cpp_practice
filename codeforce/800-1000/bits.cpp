#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);g
    int n;
    cin>>n;
    int X=0;
    while(n--){
        string a;
        cin>>a;
        if (a=="X++" || a=="++X"){
            X++;
        }
        else if(a=="--X" || a=="X--"){
            X--;
        }
    }
    cout<<X<<"\n";
    return 0;
}