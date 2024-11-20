#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
};

int main(){
    Node a,b;  //create node using class 

    a.val = 100; // declare value for node a and b
    b.val = 200;

    a.next = &b; // create link with a and b
    b.next = NULL;

    cout << a.val << " " << b.val << endl;
    cout << a.val << " " << a.next->val << endl;
    cout << a.val << " " << (*a.next).val << endl;
    cout << a.next << " " << b.next << endl;

}