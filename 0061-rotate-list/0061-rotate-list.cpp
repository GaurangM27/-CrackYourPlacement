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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        if(k==0 || n==0 || k%n==0)
        return head;
        int pos=n-(k%n);
        ListNode* pre;
        temp=head;
        n=1;
        while(temp->next){
            if(n==pos){
                pre=temp;
            }
            temp=temp->next;
            n++;
        }
        temp->next=head;
        ListNode* neHead=pre->next;
        pre->next=NULL;
        return neHead;
    }
};