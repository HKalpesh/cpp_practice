#include <iostream>
#include <stack>
#include <string>
#include <utility>
using namespace std;
int main (){
    //initilize an empty stack 
    stack<string> my_stack;
    
    //pushing element into the stack 
    my_stack.push("a");
    my_stack.push("b");

    // view and pop the element form the stack 
    string removed_item =my_stack.top();// points toward the top element dont return the top element 
    my_stack.pop(); // pop's the top most element according to lifo
    cout << "removed_item:"<< removed_item<< endl;
    cout<<"new top:"<< my_stack.top()<< endl ;
    return 0;
}