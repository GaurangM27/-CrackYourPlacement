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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* neHead=NULL;
        ListNode* prev=NULL;
        while(list1 && list2){
            if(list1->val<list2->val){
                if(neHead==NULL){
                    neHead=list1;
                    prev=list1;
                }
                else{
                    prev->next=list1;
                    prev=prev->next;
                }
                list1=list1->next;
            }
            else{
               if(neHead==NULL){
                    neHead=list2;
                    prev=list2;
                }
                else{
                    prev->next=list2;
                    prev=prev->next;
                } 
                list2=list2->next;
            }
        }
        while(list1){
            if(neHead==NULL){
                    neHead=list1;
                    prev=list1;
                }
                else{
                    prev->next=list1;
                    prev=prev->next;
                }
                list1=list1->next;
        }
        while(list2){
            if(neHead==NULL){
                    neHead=list2;
                    prev=list2;
                }
                else{
                    prev->next=list2;
                    prev=prev->next;
                } 
                list2=list2->next;
        }
        return neHead;
    }
};