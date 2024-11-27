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

    void reverse(ListNode* &head, ListNode* cur){
       
        if (head == NULL || head->next == NULL) {
            return; // Nothing to reverse
        }
        
        if(cur->next == NULL){
            head = cur;
            return;
        }
        
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
        
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        reverse(head,head);
        if(n==1){
            if(head->next != NULL){
                head = head->next;
                
            }else{
                head = NULL;
            }
        }else{
            ListNode* tmp = head;
            for(int i=1; i<n-1; i++){
                tmp = tmp->next;
            }
            if(tmp->next->next != NULL){
                tmp->next = tmp->next->next;
            }else{
                tmp->next = NULL;
            }
        }
        
        reverse(head,head);
        return head;
    }
};