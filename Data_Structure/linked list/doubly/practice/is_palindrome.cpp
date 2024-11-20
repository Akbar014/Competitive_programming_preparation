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

void insert_node(Node * &head, Node * &tail, int val){

    Node * newNode = new Node (val);

    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;


}

void print_linked_list(Node * head){
    Node * tmp = head;

    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void is_palindrome(Node *&head, Node *&tail){

    Node * i = head;
    Node * j = tail;
    bool palindrome = true;
    while( i != j && i->prev != j){

        if(i->val != j->val){ 
            palindrome = false;
            break;
        }

        i= i->next;
        j= j->prev;
    }

    cout << (palindrome ? "YES" : "NO") << endl;

}
int main(){


    Node * head = NULL;
    Node * tail = NULL;

    while(true){

        int val;
        cin >> val;

        if(val == -1){
            break;
        }else{
            insert_node(head, tail, val);
        }

    }

    is_palindrome(head, tail);
    // print_linked_list(head);

    return 0;
}