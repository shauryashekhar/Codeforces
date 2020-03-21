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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* pNthNode = NULL;
        ListNode* pTemp = head;
        for(int i = 1; i < n; i++) {
            pTemp = pTemp->next;
        }
        while(pTemp) {
            if(pNthNode) {
                pNthNode = pNthNode->next;
            } else {
                pNthNode = head;
            }
            pTemp = pTemp->next;
        }
        ListNode* current = head;
        ListNode* prev = head;
        if(current == pNthNode) {
            head = head->next;
            delete(current);
            return head;
        }
        while(current != pNthNode) {
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        delete(current);
        return head;
    }
};