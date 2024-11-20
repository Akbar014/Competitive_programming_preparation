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

void is_same_linked_list(Node *head1, Node *head2){
    Node * tmp1= head1;
    Node * tmp2 = head2;
    bool same = true;
    while(tmp1 != NULL && tmp2!=NULL){
        
        if(tmp1->val != tmp2->val){
            same = false;
            break;

        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    cout << (same ? "YES" : "NO") << endl;
}

int main(){


    Node * head1 = NULL;
    Node * tail1 = NULL;
    Node * head2 = NULL;
    Node * tail2 = NULL;

    while(true){

        int val1;
        cin >> val1;

        if(val1 == -1){
            break;
        }else{
            insert_node(head1, tail1, val1);
        }

    }

    while(true){

        int val2;
        cin >> val2;

        if(val2 == -1){
            break;
        }else{
            insert_node(head2, tail2, val2);
        }

    }

    // print_linked_list(head1);

    cout << "Another list " << endl;

    // print_linked_list(head2);

    is_same_linked_list(head1, head2);

    return 0;
}