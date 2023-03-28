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
    ListNode *getIntersectionNode(ListNode *head, ListNode *curr) {
        
        ListNode* a = head, *b = curr;
        
        while(a != b){
            if(a == NULL) a = curr;
            else a=a->next;
            if(b == NULL) b = head;
            else b = b->next;

        }
        return a;
    }
};