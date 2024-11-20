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
            this->next = NULL;
        }
};

void print_list(Node * head){
    Node * tmp = head;

    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main(){

    list<int>mylist;

    while(true){
        int val;
        cin >> val ;

        if(val == -1){
            break;
        }else{
            mylist.push_back(val);
        }
    }

    // print_list(mylist.begin());
    // mylist.sort();
    
    mylist.sort(greater<int>());

    for (int val:mylist){
        cout << val << endl;
    }

    return 0;
}