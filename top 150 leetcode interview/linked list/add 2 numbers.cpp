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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* p=l1, *q=l2, *curr = res;
        int carry=0;

        // Traverse both lists
        while (p != NULL || q != NULL) {
            // Get the values of the current nodes, defaulting to 0 if one list is shorter
            int x = (p != NULL) ? p->val : 0;
            int y = (q != NULL) ? q->val : 0;

            // Calculate the sum and update the carry
            int sum = x + y + carry;
            carry = sum / 10;

            // Create a new node for the current digit of the result
            curr->next = new ListNode(sum % 10);  // this is the digit to be added after carry
            curr = curr->next;

            if (p != NULL) p = p->next;
            if (q != NULL) q = q->next;
        }

        // If there's a carry left after the loop, add it as a new node
        if (carry > 0) {
            curr->next = new ListNode(carry);
        }

        // The result is in the next node of dummy, as dummy itself is just a placeholder
        return res->next;
    }
};
// 20 ms here


// 0 ms 

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tempa = l1;
        ListNode* tempb = l2;
        ListNode* c = new ListNode(100);
        ListNode* tempc = c;
        int b=0;
        int r=0;//remainder
        while(tempa && tempb){
            int sum = tempa->val+tempb->val;
            sum+=r;
            r=0;
            if(sum>9){
                r=sum/10;
                sum=sum%10;
            }
            ListNode* temp = new ListNode(sum);
            tempc->next = temp;
            tempa=tempa->next;
            tempb=tempb->next;
            tempc=tempc->next;
        }
        while(tempa){
            int sum = tempa->val;
            sum+=r;
            r=0;
            if(sum>9){
                r=sum/10;
                sum=sum%10;
            }
            tempa->val=sum;
            tempc->next=tempa;
            tempa=tempa->next;
            tempc=tempc->next;
        }
        while(tempb){
            int sum = tempb->val;
            sum+=r;
            r=0;
            if(sum>9){
                r=sum/10;
                sum=sum%10;
            }
            tempb->val=sum;
            tempc->next=tempb;
            tempb=tempb->next;
            tempc=tempc->next;
        }
        if(r!=0){
            ListNode *rem = new ListNode(r);
            tempc->next=rem;
            tempc=tempc->next;
        }
        //reverse
        
        return c->next;
    }
};