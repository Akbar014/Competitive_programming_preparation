/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insert_node(ListNode* &head, ListNode* &tail, int val){
        ListNode* newNode = new ListNode(val);
        // ListNode* tmp = head;
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        tail->next = newNode;
    }

    ListNode* mergeNodes(ListNode* head) {
        ListNode* tmp = head;
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        while(tmp->next!=NULL){
            int nodeValue = 0;
            if(tmp->next->val != 0){
                nodeValue += tmp->next->val;
            }else if(tmp->next->val == 0){
                insert_node (newHead,newTail,nodeValue);
                nodeValue = 0;
            }
        }

        return newHead;
        
    }
};


......................................................................................

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* tmp = head;
        while(tmp->next!=NULL){
            if( tmp->next->val != 0){
                tmp->val += tmp->next->val;
                tmp->next = tmp->next->next; 
               
            }else{
                tmp = tmp->next;   
            }
        }

        tmp = head; 
        while (tmp->next != nullptr && tmp->next->val != 0) {
            tmp = tmp->next; 
        }
        tmp->next = nullptr; 
        return head;
        
    }
};