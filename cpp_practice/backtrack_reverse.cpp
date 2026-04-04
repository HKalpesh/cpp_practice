#include<bits/stdc++.h>
using namespace std;

void backtrack_reverse(int i, int n){
    if (i>n){
        return;
    }
    backtrack_reverse(i+1,n);
    cout<< i<<endl;

}
int main(){
    int i ,n;
    i=1,n=4;
    backtrack_reverse(i,n);
}