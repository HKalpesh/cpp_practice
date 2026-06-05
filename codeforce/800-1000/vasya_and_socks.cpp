#include<bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int socks;
    int days;
    int current_day;
    // cout<<"enter the initial socks vasya has "<< endl;
    cin>>socks;
    // cout<< "enter the day it will last long "<<endl;
    cin>>days;
    current_day=socks+(socks-1)/(days-1);
    // while(socks>0){
    //     current_day=current_day+1;
    //     socks=socks-1;
    //     if(current_day%days==0){
    //         socks=socks+1;
    //     }
    //     // cout<<"day "<<current_day<<" socks left "<<socks<<endl;
    // }
    cout<<current_day<<endl;
    
}