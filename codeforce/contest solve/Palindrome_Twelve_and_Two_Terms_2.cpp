#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    long long a = -1;
    long long b = -1;
    bool found = false;

    if (n >= 0) {
        string n_str = to_string(n);
        string rev = n_str;
        reverse(rev.begin(), rev.end());
        if (n_str == rev) {
            cout << n << " " << 0 << "\n";
            return;
        }
    }

    for (long long i = 1; i < 1000; i++) {
        long long current_b = i * 12;
        if (current_b > n) break; 
        
        a = n - current_b;
        
        string a_str = to_string(a);
        string rev = a_str;
        reverse(rev.begin(), rev.end());
        
        if (a_str == rev) {
            b = current_b;
            found = true;
            break; 
        }
    }

    if (found) {
        cout << a << " " << b << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}