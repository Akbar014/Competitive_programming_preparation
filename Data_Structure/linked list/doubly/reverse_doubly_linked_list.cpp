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
void reverse_linked_list(Node *head, Node *tail){

    Node * i = head;
    Node * j = tail;
    while(i != j && i->next != j){
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}
int main(){

    Node *head = new Node (10);
    Node *a = new Node (20);
    Node *b = new Node (30);
    Node *c = new Node (40);
    Node *tail = new Node (50);

    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = c;

    c->prev = b;
    c->next = tail;

    tail->prev = c;

    reverse_linked_list(head, tail);
    Node * tmp = head;
    while(tmp != NULL){

        cout<< tmp->val << endl;
        tmp = tmp->next;
        
    }

    return 0;
}