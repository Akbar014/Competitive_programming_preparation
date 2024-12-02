class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int>q2;
        int k;
        while(!q.empty()){
            int val = q.front();
            q.pop();

            if(!q.empty()){
                q2.push(val);
                
            }else{
                // return val;
                k = val;
                // break;
            }
        }

        q=q2;
        return k;
        

    }
    
    int top() {
        queue<int>q2;
        int k;
        while(!q.empty()){
            int val = q.front();
            q.pop();
            
            if(q.empty()){
                k = val;
            }
            
            q2.push(val);

           
        }

        q=q2;
        return k;
    }
    
    bool empty() {
        if(q.size()==0) return true;
        else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */