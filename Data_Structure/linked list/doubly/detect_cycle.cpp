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

void detect_cycle(Node *head){
    Node * fast = head;
    Node * slow = head;
    bool cycle = false;
    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            cycle = true;
            break;
        }
    }

    cout << (cycle ? "Cycle Detected" : "No Cycle detected");
}

int main(){

    Node *head = new Node (10);
    Node *a = new Node (20);
    Node *b= new Node (30);
    Node *c = new Node (40); 

    head->next = a;
    
    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = c;

    c->prev = b; 
    // c->next = a;

    detect_cycle(head);

    return 0;
}