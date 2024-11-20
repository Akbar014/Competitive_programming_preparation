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
void find_middle(Node * head){
    Node * tmp = head;
    vector <int> v;
    while(tmp!=NULL){
        // cout << tmp->val << " ";
        // auto it = find(v.begin(), v.end(), tmp->val);
        // if(it != v.end()){
        //     is_duplicate = true;
        //     break;
        // }
        v.push_back(tmp->val);
        tmp = tmp->next;
    }

    int size = v.size();
    if(size%2 == 0){
        cout << v[size/2 - 1] << " " << v[size/2] << endl;
    }else{
        cout << v[size/2] << endl;
    }
    

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

    find_middle(head);

    return 0;
}