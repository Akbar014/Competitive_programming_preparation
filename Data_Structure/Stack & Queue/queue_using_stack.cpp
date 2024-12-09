#include<bits/stdc++.h>
using namespace std;
class MyQueue{
    public:
        stack<int> st;
        void push(int val){
            st.push(val);
        }

        void pop(){
            stack <int> newStack;
           
            int last;
            while(!st.empty()){
                 int k = st.top();
                st.pop();
                if(st.empty()){

                    last = k;
                    break;

                }
                newStack.push(k);
            }

            while(!newStack.empty()){
                st.push(newStack.top());
                newStack.pop();
            }
           
            return last;
        }

        int peek()
        {
            stack<int> newSt;
            int last;
            while (!st.empty())
            {
                int k = st.top();
                st.pop();
                if (st.empty())
                {
                    // last element
                    last = k;
                }
                newSt.push(k);
            }
            while (!newSt.empty())
            {
                st.push(newSt.top());
                newSt.pop();
            }
            return last;
        }

        bool empty()
        {
            return st.empty();
        }


};
int main(){

    return 0;
}