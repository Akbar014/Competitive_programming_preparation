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
    Node * newNode =  new Node (val);
    if(head==NULL){
        head = newNode;
        // cout << "Node inserted at head" << endl;
        return;
    }
    Node * tmp = head;
    while(tmp->next !=NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
    // cout << "Node Inserted at tail" << endl;
}
void size_of_list(Node * head){
    Node * tmp = head;
    int count = 0;
    while(tmp!=NULL){
        // cout << tmp->val << " ";
        count += 1;
        tmp = tmp->next;
    }
    cout << count << endl;

}
int main(){
    Node * head = NULL;
    while(true){
        int val;
        cin >> val;
        if(val==-1){
            break;
        }else{
            insert_at_tail(head,val);
        }
    }

    size_of_list(head);

    return 0;
}