// #include <bits/stdc++.h>
// using namespace std;

// int solve(int n) {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int curr = (n + 1) / 2;
//     cout << curr << " "; 

//     for (int i = 1; i < n; i++) {
//         if (i % 2 != 0) { 
//             curr += i; 
//         } else {
//             curr -= i; 
//         }
//         cout << curr << " ";
//     }
//     cout << endl;
//     return 0;
// }

// int main() {
//     int t;
//     cin >> t;
//     while(t>0){ {
//         solve(t);
//         t--;
//     }
//     return 0;
// }
// }        





#include <bits/stdc++.h>
using namespace std;

void solve(int n) { // Changed return type to void (simpler)
    int curr = (n + 1) / 2;
    cout << curr << " "; 

    for (int i = 1; i < n; i++) {
        if (i % 2 != 0) { 
            curr += i; 
        } else {
            curr -= i; 
        }
        cout << curr << " ";
    }
    cout << "\n"; // Use \n instead of endl for speed
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; // CRITICAL STEP: Read n for this specific test case
        solve(n);
    }
    return 0;
}