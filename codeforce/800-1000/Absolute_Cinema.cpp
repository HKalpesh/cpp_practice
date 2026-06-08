#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    int global_max = 0;
    
    // ONE SINGLE LOOP to process pairs and track the global king
    for(int i = 0; i < n; i++) {
        // Step A: Track the absolute highest number seen anywhere in the input
        global_max = max({global_max, a[i], b[i()});
        
        // Step B: Greedy Swap - Ensure the larger value of the pair sits in 'b'
        if (a[i] > b[i]) {
            swap(a[i], b[i]);
        }
    }
    
    // Step C: Sum up all elements currently pushed into array 'b'
    long long sum_b = 0;
    for(int i = 0; i < n; i++) {
        sum_b += b[i];
    }
    
    // Step D: The formula states: max(a) + sum(b).
    // Our 'global_max' is guaranteed to be the supreme king of array 'a'. 
    // However, since it is currently sitting inside 'sum_b', we must replace 
    // the largest element of 'b' with the matching pair from 'a' to legally balance it.
    // Mathematically, this is perfectly handled by finding the max value in 'b' 
    // after our sorting loop, removing it from 'sum_b', and adding 'global_max'.
    
    int max_of_sorted_b = *max_element(b.begin(), b.end());
    long long total_score = global_max + (sum_b - max_of_sorted_b);
    
    cout << total_score << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}