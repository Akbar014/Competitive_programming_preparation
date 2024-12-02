class MyQueue {
public:
    stack<int>s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
        
    }
    
    int pop() {
        stack<int>s2;
        int first;
        while(!s.empty()){
            int val = s.top();
            s.pop();
            if(s.empty()){
                first = val;
                break;
            }
            s2.push(val);
        }
        // s=s2;
        while(!s2.empty()){
            int val = s2.top();
            s2.pop();
            s.push(val);
        }
        return first;
    }
    
    int peek() {
        stack<int>s2;
        int first;
        while(!s.empty()){
            int val = s.top();
            s.pop();
            if(s.empty()){
                first = val;
                // break;
            }
            s2.push(val);
        }
        // s=s2;
        while(!s2.empty()){
            int val = s2.top();
            s2.pop();
            s.push(val);
        }
        return first;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */