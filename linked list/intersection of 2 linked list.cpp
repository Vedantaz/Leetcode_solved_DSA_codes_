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
        

        // shorter solution 

        ListNode* a = head, *b = curr;
        
        while(a != b){
            if(a == NULL) a = curr;
            else a=a->next;
            if(b == NULL) b = head;
            else b = b->next;

        }
        return a;

        // explanatory solution
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
        
        ListNode* res = head, *res2 = curr;
        int a=0, b=0;
        while(res){
            a++;
            res =res->next;
        }
        while(res2){
            b++;
            res2 =res2->next;
        }
        int diff = abs(a-b);

        if(a<b){
            while(diff--){
                curr = curr->next;

            }
        }
        else{
            while(diff--){
                head = head->next;
                
            }
        }

        while(head && curr){
            if(head == curr) return head;

            head = head->next;
            curr = curr->next;

        }
        return NULL;

    }
};
    }
};