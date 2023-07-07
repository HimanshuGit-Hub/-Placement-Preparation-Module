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
//Prev is declare for before pointing node of list 1
        ListNode* prev=NULL;
//head is declare the current node of list1
        ListNode* head=list1;
//ans is declare for insert the element of list 2 to list 1 
        ListNode* ans=NULL;
//if any of list is NULL then return another
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
//check whether first element of list 2 is smaller than list 1
        if(head->val > list2->val){
            list1=list2;
            list2=list2->next;
            list1->next=head;
            prev=list1;
        }
//check for another element 
        while(list2!=NULL && head!=NULL){
            if(head->val > list2->val){
            ans=list2;
            list2=list2->next;
            prev->next=ans;
            ans->next=head;
            prev=ans;
            }
             else{
                prev=head;
                if(head->next==NULL){
                break;
             }  
             head=head->next;
             }
            }
//if node is remaining  in list2 then merge in list 1
            if(list2!=NULL){
               head->next=list2;
            }
        return list1;
    }
};