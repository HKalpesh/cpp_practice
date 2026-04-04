// n = int(input()) 
// i = 1 
// while(i <= n): 
//     word = str(input()) 
//     if len(word) > 10: 
//         print(f"{word[0]}{len(word) - 2}{word[-2]}{word[-1]}") 
//     else: 
//         print(word) 
//     i+=1


#include <iostream>
#include <string>
using namespace std;

int main (){
int n;
string word;
cout<<"enter number of words: "<<endl;
cin>> n;
while(n>0){
cout<<"enter the word: "<<endl;
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


