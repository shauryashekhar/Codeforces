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
    ListNode* middleNode(ListNode* head) {
        if(!head) {
            return NULL;
        }
        ListNode* ptr1x = head;
        ListNode* ptr2x = head;
        while(ptr1x && ptr2x && ptr2x->next) {
            ptr1x = ptr1x->next;
            ptr2x = ptr2x->next->next;
        }
        return ptr1x;
    }
};