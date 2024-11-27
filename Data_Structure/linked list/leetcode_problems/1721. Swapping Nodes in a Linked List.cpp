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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* tmp = head;
        int length = 0;
        while(tmp!=NULL) {
            length++;
            tmp = tmp->next;
        }

        int endPosition = length-k+1;

        ListNode* fromStart = head;
        for(int i=1; i<k; i++){
            fromStart = fromStart->next;
        }

        ListNode* fromEnd = head;
        for(int i=1; i<endPosition; i++){
            fromEnd = fromEnd->next;
        }

        swap(fromStart->val, fromEnd->val);

        return head;


    }
};