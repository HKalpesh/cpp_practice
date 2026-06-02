#include <bits/stdc++.h>
using namespace std;

class MinStack
{
private:
    stack<int> st;

public:
    MinStack() {}

    void push(int val) {
        st.push(val);
    }

    void pop() {
        if (!st.empty()) st.pop();
    }

    int top() {
        if (!st.empty()) return st.top();
        return -1;
    }

    int getMin() {
        if (st.empty()) return -1;
        
        stack<int> temp;
        int mini = st.top(); 
        while (st.size()) {
            mini = min(mini, st.top());
            temp.push(st.top());
            st.pop(); 
        }
        while (temp.size()) {
            st.push(temp.top());
            temp.pop();
        }
        return mini;
    }
};

// ADD THIS MAIN FUNCTION TO TEST IT
int main() {
    MinStack myStack;
    
    myStack.push(5);
    myStack.push(3);
    myStack.push(7);
    
    cout << "Current Top: " << myStack.top() << endl;      // Should print 7
    cout << "Minimum Value: " << myStack.getMin() << endl; // Should print 3
    
    return 0;
}
