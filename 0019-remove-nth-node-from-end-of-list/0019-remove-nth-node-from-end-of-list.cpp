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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)
        return NULL;
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* fast=dummy;
        ListNode* slow=dummy;
        int count=0;
        while(fast && fast->next){
            if(count==n)
            slow=slow->next;
            else
            count++;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        if(slow==dummy)
        return slow->next;
        return head;
    }
};