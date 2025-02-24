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
void insert_at_tail(Node * &head, int val){

    Node * tmp = head;
    Node * newNode = new Node (val);

    if (head == NULL){
        
        head = newNode;
        return;
    }

    while(tmp->next != NULL){
        tmp = tmp->next;
    }

    tmp->next = newNode;

}

// void insert_at_head(Node *&head, int val){
//     Node * newNode = new Node (val);
//     Node * tmp = head;
//     newNode->next = tmp;
//     head = newNode;
// }

void print_linked_list(Node *head){

    Node * tmp = head;

    while(tmp != NULL){

        cout << tmp->val << " " ;
        tmp = tmp->next;

    } 
    cout << endl;
}
int main(){

    Node * head = NULL;
    while(true){
        int val;
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    return 0;
}