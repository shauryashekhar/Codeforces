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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* l1 = headA;
        ListNode* l2 = headB;
        int len1 = 0;
        int len2 = 0;
        while(l1) {
            l1 = l1->next;
            len1++;
        }
        while(l2) {
            l2 = l2->next;
            len2++;
        }
        int diff = 0;
        if(len1 > len2) {
            diff = len1 - len2;
            l1 = headA;
            l2 = headB;
        } else {
            diff = len2 - len1;
            l1 = headB;
            l2 = headA;
        }
        for(int i = 0; i < diff; i++) {
            l1 = l1 -> next;
        }
        while(l1 && l2) {
            if(l1 == l2) {
                return l1;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        return NULL;
    }
};