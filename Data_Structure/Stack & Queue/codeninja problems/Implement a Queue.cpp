#include <bits/stdc++.h>


class Queue {
    vector<int>q;
public:
    Queue() {
        // Implement the Constructor
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // if(q.size()==0) return true;
        return q.empty();
        // else return false;
        // Implement the isEmpty() function
    }

    void enqueue(int data) {

        // Implement the enqueue() function
        q.push_back(data);
    }

    int dequeue() {

        // Implement the dequeue() function
        if(q.empty()){
            return -1;
        }else{
            int front_val = q.front();
            q.erase(q.begin()); // Remove the first element
            return front_val;
        }
        

        
    }

    int front() {
        // Implement the front() function
        if(!q.empty()) return q.front();
        else return -1;
    }
};