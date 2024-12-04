
void reverseStack(stack<int> &s) {
    // Write your code here
    // reverseStackRecursion(s,s.top());
    if(s.empty()){
        return;
    }
    int val = s.top();
    s.pop();
    reverseStack(s);

    stack<int>s2;
    while(!s.empty()){
        s2.push(s.top());
        s.pop();
    }
    s2.push(val);

    while(!s2.empty()){
        s.push(s2.top());
        s2.pop();
    }

}