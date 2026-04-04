/*Reverse a number
You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

Example 1

Input: n = 25

Output: 52

Explanation: Reverse of 25 is 52.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int reverse(int n){
    int rev=0;
    int sign=1;
    if(n>0){
        sign=1;
    }
    else if(n<0){
        sign=-1;
        n= -n;
    }
    while(n>0){
        int lastdig=n%10;
        rev=rev*10+lastdig;
        n=n/10;

    }
    return rev;

}
  int main(){
    int N=-123;
   int dig=reverse(N);
   cout<< "reverse no"<< dig;
    return 0;
  }