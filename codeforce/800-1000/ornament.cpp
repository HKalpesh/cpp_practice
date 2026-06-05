#include<bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int yellow , blue , red;
    cin>>yellow>>blue>>red;
    int max_yellow = min({yellow, blue - 1, red - 2});
    int total_sum = max_yellow + (max_yellow + 1) + (max_yellow + 2);
    cout << total_sum << endl;
    return 0;
}