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
    void reversed(ListNode* start, ListNode* end){
        
        ListNode* prev = NULL, *curr = start , *nxt = start->next;
        while(prev!= end){
            
            curr->next = prev;
            prev = curr;
            curr = nxt;
            if(nxt != NULL) nxt = nxt->next;
            
            
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL || k==1) return head;
        
        ListNode* start = head, *end = head ;
        
        int in = k-1;
        
        while(in--){
            end = end->next;
            if(end == NULL ) return head;
        }
        
        ListNode* nextHead = reverseKGroup(end->next, k);
        reversed(start, end);
        start->next = nextHead;
        return end;

    }
    
};