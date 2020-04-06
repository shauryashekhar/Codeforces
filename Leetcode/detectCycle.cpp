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
    ListNode *detectCycle(ListNode *head) {
        if(!head) {
            return NULL;
        }
        int loopExists = 0;
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow && fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                loopExists = 1;
                break;
            }
        }
        if(loopExists == 1) {
            slow = head;
            while(slow != fast) {
                slow = slow->next;
                fast = fast->next;
            } 
            return slow;
        } else {
            return NULL;
        }
        return NULL;
    }
};