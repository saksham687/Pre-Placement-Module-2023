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
        if(head==nullptr) return nullptr;
        if(head->next==nullptr) return head;
        if(head->val!=head->next->val) {
            head->next=deleteDuplicates(head->next);
            return head;
        }
        ListNode* newHead = head;
        while(newHead->next!=nullptr){
            if(newHead->val!=newHead->next->val) return deleteDuplicates(newHead->next);
            newHead = newHead->next;
        }
        return nullptr;
    }
};