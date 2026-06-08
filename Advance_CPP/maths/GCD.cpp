#include<bits/stdc++.h>
using namespace std;

// gcd(a,b)=max{k>0 :(k|a) and (k|b)}
/*GCD Formal Definition 
The Greatest Common Divisor GCD of two numbers is the largest (max) positive integer (k) that divides both numbers cleanly without a remainder.*/

/*>>>The Euclidean Algorithm
A fast method to find the Greatest Common Divisor (GCD) of two numbers by repeatedly replacing the larger number with the remainder of the two.
The Logic:
Instead of repeatedly subtracting $b$ from $a$ (which is slow), just find the remainder of (a/b) (which is fast). Keep doing this until there is no remainder.
*/

/*>>>>>>>>>formula 
gcd(a,b)={a,                if b=0
{gcd(b,a mod b),   otherwise.
*/

//recursive implementation 
// /*
int gcd(int a, int b ){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main(){
    int a = 1;
    int b=2;
    int gcd_result=gcd(a,b);
    cout<<gcd_result<<endl;
    return 0;
}
// */

//using ternary oprtor 
/*
int gcd(int a,int b){
    return b? gcd(b,a%b):a;
}
int main(){
    int a =10;
    int b=30;
    int gcd_result=gcd(a,b);
    cout<<gcd_result<<endl;
    return 0;
}
*/

// using non recursive implementation 
/*
int gcd(int a, int b){
    while(b){
        a %=b;
        swap(a,b);
    }
    return a;
}
int main(){
    int a =10;
    int b=30;
    int gcd_result=gcd(a,b);
    cout<<gcd_result<<endl;
    return 0;
}
*/

//>>>>>>>>>time complexity 
/*Euclidean Algorithm Time ComplexityTime Complexity: 
O(log min(a, b))
Why it's fast: In every iteration, the larger number is reduced by at least half (a mod b < a/2). Repeated halving always results in a logarithmic time complexity.
*/

/*Worst-Case ScenarioThe Culprit: 
Consecutive Fibonacci numbers (e.g.,gcd(34, 21)).Why: Because F_n mod F_{n-1} = F_{n-2}, the algorithm is forced to step down the sequence one number at a time, making it take the maximum possible number of steps (n-2 calls)
*/

/*GCD of Multiple Numbers (Array of size n, Max value C)
Total Runtime: O(n + log C)
Why: As you iterate through the array, the global GCD candidate shrinks rapidly (halving each time it changes). It can only shrink a maximum of log C times total across the entire loop execution.
*/










