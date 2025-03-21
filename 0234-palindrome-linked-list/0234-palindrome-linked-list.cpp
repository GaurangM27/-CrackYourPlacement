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
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* dummy=NULL;
        while(slow){
            ListNode* ne=slow->next;
            slow->next=dummy;
            dummy=slow;
            slow=ne;
        }
        while(head && dummy){
            if(head->val!=dummy->val)
            return false;
            head=head->next;
            dummy=dummy->next;
        }
        return true;
    }
};