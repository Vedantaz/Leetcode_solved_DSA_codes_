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
        
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;  // prev points to the last node before the sublist of duplicates

        while (head != nullptr) {
            // Check if the current node is the start of duplicates
            if (head->next != nullptr && head->val == head->next->val) {
                // Skip all nodes with the same value
                while (head->next != nullptr && head->val == head->next->val) {
                    head = head->next;
                }
                // Link prev to the node after the duplicates
                prev->next = head->next;
            } else {
                // If no duplicates, just move prev
                prev = prev->next;
            }
            // Move head forward
            head = head->next;
        }
        ListNode* result = dummy->next;
        delete dummy;  
        return result;
    }
};

// 5ms developed

