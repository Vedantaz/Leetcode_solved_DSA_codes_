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
    ListNode* partition(ListNode* head, int x) {
        ListNode* before = new ListNode(0);
        ListNode* after = new ListNode(0);

        // Two pointers to track the current positions in the before and after lists.
        ListNode* beforeHead = before;
        ListNode* afterHead = after;

        // Traverse the original list
        while (head != nullptr) {
            if (head->val < x) {
                before->next = head;  // Attach the node to the 'before' list
                before = before->next;
            } else {
                after->next = head;   // Attach the node to the 'after' list
                after = after->next;
            }
            head = head->next;
        }

        // Ensure the last node of 'after' list points to null
        after->next = nullptr;

        // Connect the 'before' list with the 'after' list
        before->next = afterHead->next;

        // Return the head of the new list
        return beforeHead->next;
    }
};

// 4ms developed