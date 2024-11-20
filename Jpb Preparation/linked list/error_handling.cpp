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

void insert_at_any_position(Node * &head, int position, int val){

    Node * newNode = new Node (val);
    Node * tmp = head;

    for (int i=0; i<position-1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            
            cout << "Invalid index" << endl;
            return;
        }
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_head(Node *&head, int val){
    Node * newNode = new Node (val);
    Node * tmp = head;   
    newNode->next = tmp;
    head = newNode;
}

void delete_head(Node * &head){
    Node * delete_node = head;
    head = head->next;
    delete delete_node;
}

void print_linked_list(Node *head){

    Node * tmp = head;

    while(tmp != NULL){

        cout << tmp->val << " " ;
        tmp = tmp->next;

    } 
    cout << endl;
}

void delete_from_any_position(Node * &head, int position){
    Node * tmp = head;
    for (int i=0; i<position-1; i++){
        tmp = tmp->next;
    }
    Node * delete_node = tmp->next;
    tmp->next = tmp->next->next;
}

int main(){

    Node * head = NULL;
    while(true){

        cout << "Option 1: Insert at tail: " << endl;
        cout << "Option 2: Print linked list: " << endl;
        cout << "Option 3: Insert at any position: " << endl;
        cout << "Option 4: Insert at head: " << endl;
        cout << "Option 5: Delete head: " << endl;
        cout << "Option 6: Delete from any position: " << endl;
        cout << "Option 7: break: " << endl;

        int option ;
        cin >> option;

        if(option==1){
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }else if(option==2){

            print_linked_list(head);
        
        }
        else if(option==3){
            int position, val;
            cout << "Enter position: " ;
            cin >> position;
            cout << "Enter value: " ;
            cin >> val;
            insert_at_any_position(head, position, val);
        }
        else if(option==4){
            int val;
            cin >> val;
            insert_at_head(head, val);
        }
        else if(option==5)
        {
            delete_head(head);
        }
         else if(option==6)
        {
            int position, val;
            cout << "Enter position: " ;
            cin >> position;
            delete_from_any_position(head, position);
        }
        else if(option==7){
            break;
        }

        
    }
    return 0;
}