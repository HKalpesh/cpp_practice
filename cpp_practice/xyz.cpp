#include <iostream>
#include <string>
using namespace std;

int main (){
    long long n;
    string word;
    cin>> n;
    while(n>0){
        cin>> word;
        if (word.length()>10){
             cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
        else{
            cout << word << endl;
        }
            n--;
        }
    return 0;
}