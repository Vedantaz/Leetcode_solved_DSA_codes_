
 ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* slow = head, *fast = head, *prev = NULL;
        
        while(fast != NULL){
            fast = fast->next;
            prev = slow;
            slow = slow->next;

        }
        prev->next = slow->next;      /// here is the member access null pointer error coming 
        prev = slow;
        
        return head;

        
    }