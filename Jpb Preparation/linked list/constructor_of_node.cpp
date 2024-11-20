#include <bits/stdc++.h>
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
    
    // static node create

    // Node a(40);
    // Node b(50);

    // cout << a.next << endl;

    // a.next = &b;

    // cout << a.val << endl;

    // cout << a.next << endl; 

    // static node create end

//......................................................................................................................................

// for avoiding extra space in memmory 
// if new node is added by creating object from another function in the linked list , when the function gone,  object is gone and node is also gone

    // dynamic node create 

    Node * head = new Node (10);
    Node * a = new Node (20);

    head->next = a;  // not &a cause a not is the object here,  a is the pointer here and consists the address 

    cout << head->val << endl;
    cout << head->next->val << endl;  // head->next = a ; then a->val

    cout << (*(*head).next).val << endl; // head is a pointer so first direfference head then (*head).next is also a pointer so dereffrence this and theen .val for accessing value

}