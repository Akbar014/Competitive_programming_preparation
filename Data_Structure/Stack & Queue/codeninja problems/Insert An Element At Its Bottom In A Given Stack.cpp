#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int>s;

    while(!myStack.empty()){
        int val = myStack.top();
        s.push(val);
        myStack.pop();
    }

    s.push(x);

    while(!s.empty()){
        int val = s.top();
        myStack.push(val);
        s.pop();

    }

    return myStack;
    
}
