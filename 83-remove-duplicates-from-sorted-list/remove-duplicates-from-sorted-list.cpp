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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        
        while (current && current->next) {
            int currentValue = current->val;
            int nextValue = current->next->val;

            if (currentValue == nextValue)
                current->next = current->next->next;
            else
                current = current->next;
        }

        return head;
    }
};