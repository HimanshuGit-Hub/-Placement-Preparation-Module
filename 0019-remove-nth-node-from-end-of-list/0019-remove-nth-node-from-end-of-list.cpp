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
        ListNode* temp = head;
        
        // Check if the list contains only one node
        if (head->next == NULL)
            return NULL;
        
        int c = 0;
        while (temp != NULL) {
            temp = temp->next;
            c++;
        }

        ListNode* temp1 = head;
        int ct = 0;
        ListNode* prev = NULL;
        
        // If n is equal to 1, remove the last node
        if (n == 1) {
            ListNode* temp2 = head;
            while (temp2->next->next != NULL) {
                temp2 = temp2->next;
            }
            temp2->next = NULL;
            return head;
        }
        
        // If n is equal to the total number of nodes, remove the first node
        if (n == c) {
            head = head->next;
            return head;
        }
        
        // Traverse to the (c-n)th node from the beginning
        while (ct < (c - n)) {
            prev = temp1;
            temp1 = temp1->next;
            ct++;
        }
        
        // Remove the nth node by updating the previous node's next pointer
        prev->next = temp1->next;
        
        return head;
    }
};