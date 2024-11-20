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

void insert_at_head(Node *&head, int val){

    Node * tmp = head;

    Node * newNode = new Node (val);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

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

    int val;
    cin >> val;

    insert_at_head(head, val);

    Node * tmp = head;
    while(tmp != NULL){

        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    return 0;
}