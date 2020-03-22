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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) {
            return NULL;
        }
        while(head && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete(temp);
        }
        ListNode* prev = head;
        ListNode* current = head;
        while(current) {
            if(current->val == val) {
                prev->next = current->next;
                delete(current);
                current = prev->next;
            } else {
                prev = current;
                current = current->next;
            }
        }
        return head;
    }
};