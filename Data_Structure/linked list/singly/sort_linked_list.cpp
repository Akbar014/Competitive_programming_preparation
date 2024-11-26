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

void sort_linked_list(Node * &head){

    for( Node * i = head; i->next != NULL; i=i->next){
        for (Node *j = i->next; j != NULL; j=j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }

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
    Node *b   = new Node (40);
    Node *c   = new Node (30);
    Node *d  = new Node (50);
    Node *tail = new Node (60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;


    sort_linked_list(head);
    
    print_linked_list (head);

    return 0;
}