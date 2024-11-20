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
int main(){

    Node * head = new Node (5);
    Node * a = new Node (10);
    Node * b = new Node (20);
    Node * c = new Node (30);
    head->next = a;
    a->next = b;
    b->next = c;
    cout << head->val << endl;
    cout << a->val << endl;
    cout << a->next->val << endl;
    cout << a->next->next->val << endl;

    return 0;
}