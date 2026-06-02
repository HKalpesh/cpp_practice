#include<bits/stdc++.h>
using namespace std;
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int price;
    int new_price=0 ;
    int banana;
    int money;
    cin>> price;
    // cout<<"price of the banana : "<<price<< endl;
    cin>>money;
    // cout<<"the money the solder already have : "<<money<< endl;
    cin>>banana;
    // cout<<"no of banna the soldier wants : "<<banana<< endl;
    for (int i=1;i<=banana;i++){
        int temp =price*i;
        new_price=new_price+temp ;
        // cout<<"the price of "<<i<<"th banana is : "<<temp<<endl;
        // cout<<"the total price after buying "<<i<<"th banana is : "<<new_price<<endl;
    }
    // cout<< "the new price is : "<<new_price<<endl;
    if (new_price>money){
        cout<<new_price-money<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}