#include <bits/stdc++.h>
using namespace std;

void sum()
{
    int a, b, c;

    cin >> a >> b >> c;
    cout<<(a+b==c || b+c==a || c+a==b ? "yes\n":"no\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        sum();
    }
    return 0;
}