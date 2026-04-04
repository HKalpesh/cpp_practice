#include <iostream>
#include <list>
using namespace std;

void explainList() {
    // 1. Basic List
    list<int> lst;
    lst.push_back(1);
    lst.emplace_back(2);
    
    cout << "Output of lst: ";
    for(int element : lst) {
        cout << element << " ";
    }
    cout << endl; // Moves to the next line

    // 2. List of Pairs
    list<pair<int, int>> lstPairs;
    lstPairs.push_back({1, 2});
    lstPairs.emplace_back(1, 2);

    cout << "Output of lstPairs (pairs): ";
    for(auto p : lstPairs) {
        cout << "{" << p.first << "," << p.second << "} ";
    }
    cout << endl;

    // 3. Pre-filled List
    list<int> lstPrefilled(5, 100); // 5 elements, all 100
    cout << "Output of lstPrefilled: ";
    for(int x : lstPrefilled) {
        cout << x << " "; 
    }
    cout << endl;

    // 4. Copying Lists
    list<int> lst1(5, 20); // 5 elements, all 20
    list<int> lst2(lst1);  // lst2 is a copy of lst1
    
    cout << "Output of lst2 (copy of lst1): ";
    for(int x : lst2) {
        cout << x << " ";
    }
    cout << endl;
    
}

int main() {
    explainList();
    return 0;
}