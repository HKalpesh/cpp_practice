#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(string s)
{
    string cleaned;
    for (char c : s)
    {
        if (isalnum(c))
        {
            cleaned += tolower(c);
        }
    }
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        string rev = string(cleaned.rbegin(), cleaned.rend());
        return cleaned==rev;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string r =  "Was it a car or a cat I saw?";
    isPalindrome(r);
    cout<<(isPalindrome(r) ? "True" : "False")<<endl;
    return 0;
}
