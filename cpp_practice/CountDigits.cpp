/*Count all Digits of a Number
##Easy

##Company
You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.

Example 1

Input: n = 4

Output: 1

Explanation: There is only 1 digit in 4.

Example 2

Input: n = 14

Output: 2

Explanation: There are 2 digits in 14.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countdigite(int n){
    int cnt=0;
    while(n>0){
        cnt=cnt+1;
        n=n/10;

    }
    return cnt;

}

int main(){
    int N=1234;
    int digits=countdigite(N);
    cout<<"count= "<< digits<<endl;    
    return 0;
}