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
void detect_cycle(Node * head){
    Node * tmp = head;
    Node * fast = head;
    Node * slow = head;
    bool cycle = false;

    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow){
            cycle = true;
            break;
        }
         
    }

    // cout << cycle ? 'Cycle Detected' : 'No Cycle detected' << endl;
    cout << (cycle ? "Cycle Detected" : "No Cycle detected") << endl;

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
    d->next = c;

    // print_linked_list (head);

    detect_cycle(head);

    return 0;
}