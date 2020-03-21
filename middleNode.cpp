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
        ListNode* ptr1x = head;
        ListNode* ptr2x = head;
        int i = 0;
        while(ptr1x) {
            if(i == 0) {
                ptr1x = ptr1x -> next;
                i = 1;
            } else {
                ptr1x = ptr1x -> next;
                ptr2x = ptr2x -> next;
                i = 0;
            }
        }
        return ptr2x;
    }
};