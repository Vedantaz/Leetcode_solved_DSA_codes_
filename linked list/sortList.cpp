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
    ListNode* Mid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL and fast->next->next != NULL){

            slow = slow->next;
            fast = fast->next->next;

        }
        return slow;

    }
    ListNode* mergeSortList(ListNode* a, ListNode* b) {
        if(a == NULL || b == NULL){
            return (a == NULL) ? b: a;

        }
        ListNode* res = new ListNode(0);
        ListNode* curr = res;
        while(a != NULL && b!= NULL){

            if(a->val<b->val){
                curr->next = a;
                a = a->next;
            }
            else{
                curr->next = b;
                b = b->next;
            }
            curr = curr->next;

        }
        if( a!= NULL || b!= NULL){
            curr->next = (a!= NULL)?a:b;

        }
        return res->next;

    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL )
        {
            return head;
        }
        ListNode* mid = Mid(head);
        ListNode* newNode = mid->next;
        mid->next = NULL;

        ListNode* first = sortList(head);
        ListNode* last = sortList(newNode);
        return mergeSortList(first, last);







// same for gfg


    }
};