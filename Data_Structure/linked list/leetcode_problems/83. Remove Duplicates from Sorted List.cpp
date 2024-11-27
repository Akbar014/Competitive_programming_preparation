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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode * tmp = head;
        for (ListNode* i = head; i != nullptr; i = i->next) {
            ListNode* prev = i; // Pointer to track the node before `j`
            for (ListNode* j = i->next; j != nullptr; ) {
                if (i->val == j->val) {
                    // Duplicate found, remove `j`
                    prev->next = j->next;
                    delete j; // Free memory of the removed node
                    j = prev->next; // Move `j` to the next node
                } else {
                    // Move both pointers forward
                    prev = j; 
                    j = j->next;
                }
            }
        }

        return head;
        
    }
};


//  tmp & tmp এর সামনের value চেক করব যদি same হয় তাহলে node delete করবো & 
// tmp সামেন আগানোর আগে চেক করবো value same কিনা , 
// যদি same হয় তাহলে আবার loop ঘুরে node delete করবো , same না হয় তাহলে সামনে আগাবো। 

//সামনের মান যদি আমার সমান হয় তাহলে আমি সামনে আগাবো না যদি different হয় তাহলে সামনে আগাবো।



// delete করার পর চেক করবো যে আমার সামনে কি NULL আছে কিনা, যদি NULL থাকে তাহলে আমি ব্রেক করে দিবো।
// যদি আমার সামনে different value থাকে আমি সামনে আগাবো ,
// যদি আমার সামনে samw value থাকে আমি সামনে আগাবো না বলবো loop ঘুরো , loop ঘুরে node delete করবো



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode* tmp = head;

        while(tmp->next!=NULL){

            if(tmp->val == tmp->next->val){
                ListNode* deleteNode = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteNode;
            }

            if(tmp->next == NULL) break;
            else if (tmp->val != tmp->next->val){
                tmp = tmp->next;
            }
        }

        return head;
        
    }
};