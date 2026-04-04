#include<iostream>
#include <utility>
#include <vector>
using namespace std;
 void examplepairs(){
    pair<int, int >p={1,3};
    cout<< "single pair"<< endl;
    cout << p.first<< " " << p.second<< endl;
    // nested pairs 
    pair< int ,pair<int,int>> s={1,{3,4}};
    cout<< "nested pair"<< endl;
    cout << s.first<< " "<<s.second.first<< " "<<s.second.second<<endl;
    pair <int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<" arr pairs 1 (first ) of 2"<< endl;
    cout<< arr[1].second;

 }
 int main (){
    examplepairs();
 }