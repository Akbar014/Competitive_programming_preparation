#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node *prev;
        Node (int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
class MyQueue{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz= 0;

    void push(int val){
        sz++;
        Node * newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;

    }

    void pop(){
        sz--;

        Node * deleteNode = head;
        head = head->next;
        if(head==NULL){
            tail = NULL; 
            return;
        }
        head->prev = NULL;
        delete deleteNode;

    }

    int front(){
        return head->val;
        
    }

    int size(){
        return sz;
    }

    bool empty(){
        if (sz==0) return true;
        else return false;
        
    }
};
int main(){
    MyQueue q;

    q.push(10);
    q.pop();
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
 
    // cout << q.size() << endl;
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    // cout << (q.size() > 0 ? q.front() : -1) << endl;
    
    return 0;
}