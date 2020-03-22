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
    int getDecimalValue(ListNode* head) {
        vector<int> value;
        if(!head) {
            return 0;
        }
        ListNode* current = head;
        while(current) {
            value.push_back(current->val);
            current = current->next;
        }
        int result = 0;
        for(int i = 0; i < value.size(); i++) {
            int power = pow(2, i);
            int addValue = power * value[value.size() - 1 - i];
            result = result + addValue;
        }
        return result;
    }
};