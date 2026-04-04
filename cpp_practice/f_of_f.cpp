// function of funtion
#include <bits/stdc++.h>
using namespace std;
void printFN_ntimes(int i, int n)
{
    if (i > n)
    {
        return ;
    }
    cout << "kalpesh" << endl;
    printFN_ntimes(i+1,n);
}
int main(){
    printFN_ntimes(1,3);
}