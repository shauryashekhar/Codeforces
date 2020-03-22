/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // ListNode* temp;
        // ListNode* nextNode;
        // while(head) {
        //     nextNode = head->next;
        //     head->next = temp;
        //     temp = head;
        //     head = nextNode;
        // }
        // return temp;
        
        if(head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* rest = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        
        return rest;
        
    }
};