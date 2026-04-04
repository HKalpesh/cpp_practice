#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 1 && b == 1) || (b == 1 && c == 1) || (a == 1 && c == 1))
        {
            count++;
        }
        
    }
    cout << count << "\n";
    return 0;
}