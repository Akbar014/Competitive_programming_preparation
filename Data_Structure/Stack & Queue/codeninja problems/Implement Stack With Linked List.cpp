/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here
    // int val;
    // Stack* next;
    Node * head;
    Node * tail;
    int sz;


public:
    Stack()
    {
        //Write your code here
        Node * head = NULL;
        Node * tail = NULL;
        int sz = 0;
    }

    int getSize()
    {
        //Write your code here
        // Stack * tmp = head;
        // int count=0;
        // while(tmp != NULL{
        //     count++;
        //     tmp = tmp->next;
        // }

        // return count;
        return sz;
    }

    bool isEmpty()
    {
        //Write your code here
        if(sz==0) return true;
        else return false;
    }

    void push(int data)
    {
        //Write your code here
        sz++;
        Node * newNode = new Node (data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        //Write your code here
        
        Node * tmp = head;
        if(head==NULL){
            return;
        }
        sz--;
        if(head==tail){
            head = NULL;
            tail = NULL;
            return;
        }
        while(tmp->next != tail){
            tmp = tmp->next;
        }
        tail = tmp;
        tail->next = NULL;
        

    }

    int getTop()
    {
        //Write your code here
        if(sz==0) return -1;
        else return tail->data;
    }
};