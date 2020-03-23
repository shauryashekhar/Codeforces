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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tempResult;
        if(l1 == NULL && l2 == NULL) {
            return tempResult;
        }
        if(l1 == NULL) {
            return l2;
        }
        if(l2 == NULL) {
            return l1;
        }
        ListNode* h1 = l1;
        ListNode* h2 = l2;
        ListNode* result = new ListNode(0);
        ListNode* current = result;
        int carry = 0;
        while(h1 && h2) {
            int val1 = h1->val;
            h1 = h1->next;
            int val2 = h2->val;
            h2 = h2->next;
            int sum = val1 + val2;
            if(carry) {
                sum = sum + carry;
                carry = 0;
            }
            int digit;
            if(sum >= 10) {
                digit = sum % 10;
                carry = 1;
            } else {
                digit = sum;
            }
            current->next = new ListNode(digit);
            current = current->next;
        }
        while(h1) {
            int digit = h1->val;
            h1 = h1->next;
            if(carry) {
                digit = digit + 1;
                carry = 0;
            }
            if(digit >= 10) {
                digit = digit % 10;
                carry = 1;
            }
            current->next = new ListNode(digit);
            current = current->next;
        }
        while(h2) {
            int digit = h2->val;
            h2 = h2->next;
            if(carry) {
                digit = digit + 1;
                carry = 0;
            }
            if(digit >= 10) {
                digit = digit % 10;
                carry = 1;
            }
            current->next = new ListNode(digit);
            current = current->next;
        }
        if(carry) {
            current->next = new ListNode(1);
            current = current -> next;
        }
        ListNode* temp = result;
        result = result->next;
        delete(temp);
        return result;
    }
};