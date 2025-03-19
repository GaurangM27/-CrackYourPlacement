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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* dummy=new ListNode();
        ListNode* pre=dummy;
        while(l1 || l2){
            int val=carry;
            if(l1)
            val+=l1->val;
            if(l2)
            val+=l2->val;
            if(val>9){
                carry=1;
                val=val-10;
            }
            else{
                carry=0;
            }
            ListNode* temp=new ListNode(val);
            pre->next=temp;
            pre=temp;
            if(l1)
            l1=l1->next;
            if(l2)
            l2=l2->next;
        }
        if(carry==1){
            ListNode* temp=new ListNode(carry);
            pre->next=temp;
        }
        return dummy->next;
    }
};