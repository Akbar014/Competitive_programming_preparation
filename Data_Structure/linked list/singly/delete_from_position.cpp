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

    if(head == NULL){
        head = newNode ;
        return;
    }

    while(tmp->next != NULL){
        tmp = tmp->next;
    }

    tmp->next = newNode;

}

void insert_at_position(Node * head, int pos, int val){
    Node * newNode = new Node (val);
    Node * tmp = head;
    for (int i=1; i<= pos -1; i++ ){
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_head(Node * &head, int val){
    Node * newNode = new Node (val);
    if(head==NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void delete_from_position(Node * head, int pos){
    Node * tmp = head;
    for(int i=1; i<= pos-1; i++){
        tmp = tmp->next;
    }

    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}


void print_linked_list(Node * head){
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
        int n;
        cout << "Option 1 Insert at tail : " << endl;
        cout << "Option 2 Insert at any position : " << endl;
        cout << "Option 3 Insert at head : " << endl;
        cout << "Option 4 print linked list : " << endl;
        cout << "Option 5 Delete from any position : " << endl;
        cin >> n;

        if(n==1){

            int val;
            cout << "Enter Value for tail : " ;
            cin >> val;
            insert_at_tail(head, val);

        }else if(n==2){
            int pos, val;
            cout << "Enter position : "  ;
            cin >> pos;
            cout << "Enter value : " ;
            cin >> val;

            insert_at_position(head,pos,val);
        }else if (n==3){
            int val;
            cout << "Enter Value for head : " ;
            cin >> val;
            insert_at_head(head, val);
        }
        else if(n==4){
            print_linked_list(head);
        }else if(n==5){
            int pos;
            cin >> pos;
            delete_from_position(head, pos);

        }
        else{
            break;
        }
    }
    return 0;
}