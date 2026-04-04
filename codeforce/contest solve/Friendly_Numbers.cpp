#include <iostream>
using namespace std;

void solve() {
    long long x;
    cin >> x;

    long long count = 0;

    
    for (long long y = x; y <= x + 200; y++) {
        
        long long sum_digits = 0;
        long long temp = y; 
        
        while (temp > 0) {
            sum_digits += temp % 10;
            temp /= 10;
        }

        if (y - sum_digits == x) {
            count++;
        }
    }
    
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}