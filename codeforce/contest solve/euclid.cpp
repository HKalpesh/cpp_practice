#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end(),greater<long long>());
    int x = b[0];
    int y = b[1];
    bool is_valid = true;
    for (int i = 2; i < n; i++)
    {
        if (b[i] != b[i - 2] % b[i - 1])
        {
            is_valid = false;
            break;
        }
    }
    if (is_valid)
    {
        cout << x << " " << y << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}