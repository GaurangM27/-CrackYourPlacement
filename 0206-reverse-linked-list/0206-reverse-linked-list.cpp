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
ListNode* reverseLink(ListNode* head,ListNode* prev){
    if(head==NULL)
    return prev;
    ListNode* ne=head->next;
    head->next=prev;
    prev=head;
    head=ne;
    return reverseLink(head,prev);
}
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        return reverseLink(head,prev);
    }
};