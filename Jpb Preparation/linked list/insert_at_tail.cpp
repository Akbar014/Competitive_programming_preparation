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

void insert_at_tail(Node * &head, int v){

    Node * newNode = new Node (v);
    Node * tmp = head;  

    // if linked list is null 
    if (head == NULL){ 
        head = newNode;
        return;
    }

    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    // now tmp in the last node 
    tmp->next = newNode;

}

void print_linked_list(Node *head){

    Node * tmp = head;
    while(tmp!= NULL){
        cout << tmp->val << " " ;
        tmp = tmp->next;
    }

    cout << endl;
}

int main(){

    Node * head = NULL;
    while(true){
        cout << "Option 1: Inser at tail " << endl;
        cout << "Option 2: Print linked list " << endl;
        cout << "Option 3: Break " << endl;
        int option;
        cin >> option;

        if(option==1){
            // cout << "Inserted at tail" << endl;
            int val ;
            cin >> val;
            insert_at_tail(head, val);
        }
        if(option==2){
            // cout << "Print linked list" << endl;
            print_linked_list(head);
        }
        if(option==3){
            break;
        }
    }
    return 0;
}