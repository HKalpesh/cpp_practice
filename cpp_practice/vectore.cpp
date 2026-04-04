#include <iostream>
#include <vector>
using namespace std;

void explainVector() {
    // 1. Basic Vector
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    
    cout << "Output of v: ";
    // This is a "Range-based for loop" - very useful for DSA
    for(int element : v) {
        cout << element << " ";
    }
    cout << endl; // Moves to the next line

    // 2. Vector of Pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    cout << "Output of vec (pairs): ";
    for(auto p : vec) {
        cout << "{" << p.first << "," << p.second << "} ";
    }
    cout << endl;

    // 3. Pre-filled Vector
    vector<int> vo(5, 100); // 5 elements, all 100
    cout << "Output of vo: ";
    for(int x : vo) {
        cout << x << " "; 
    }
    cout << endl;

    // 4. Copying Vectors
    vector<int> v1(5, 20); // 5 elements, all 20
    vector<int> v2(v1);    // v2 is a copy of v1
    
    cout << "Output of v2 (copy of v1): ";
    for(int x : v2) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    explainVector();
    return 0;
}
///