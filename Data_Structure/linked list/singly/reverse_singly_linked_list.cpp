#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node (int val){
            this->val = val;
            this->next = NULL;
        }
};

void reverse_linked_list(Node * &head, Node *curr){

    if(curr->next == NULL){
        head = curr;
        return;
    }
    reverse_linked_list(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;

    // Node * tmp = head;


}

void print_linked_list(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main(){

    Node *head = new Node (10);
    Node *a  = new Node (20);
    Node *b   = new Node (30);
    Node *c   = new Node (40);
    Node *d  = new Node (50);
    Node *tail = new Node (60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;


    reverse_linked_list(head,head);
    
    print_linked_list (head);

    return 0;
}