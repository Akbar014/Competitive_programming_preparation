#include <bits/stdc++.h>
using namespace std;

// we need a group for creating node 
class Node {
    public:
        int val ;
        Node *next;
};

int main(){
    Node a,b;  // initialize two nodes

    a.val = 100;  // declare value for nodes
    b.val = 200;

    a.next = &b;  //  create link with b 
    b.next = NULL; 


    cout << a.val << endl;
    cout << b.val << endl;

    cout << a.next << endl; // here a.next point to next group not to value of the next node b, if we want to access value pf node b then we have to derefference a.next and access value 
    // cout << * (a.next) << endl;
    
    cout << (*a.next).val << endl;
    cout << (*a.next).next << endl;
}