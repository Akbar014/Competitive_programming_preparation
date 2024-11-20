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

void print_reverse(Node *n){
    if(n==NULL){
        return;
    }
    print_reverse(n->next);
    cout << n->val << endl;
    
}
int main(){
    Node * head = new Node (5);
    Node * a = new Node (10);
    Node * b = new Node (20);
    Node * c = new Node (30);
    head->next = a;
    a->next = b;
    b->next = c;

    Node * tmp = head;

    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    cout << "Reverse Print : " << endl;
    print_reverse(head);
    return 0;
}