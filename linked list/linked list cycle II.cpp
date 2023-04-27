/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  // optimal solution 
#include<unordered_map>

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;
        if (fast == NULL || fast->next == NULL) {
            return NULL;
        }
        slow = slow->next;
        fast = fast->next->next;
        while (fast && fast->next && slow != fast) {
            slow = slow->next;
            fast = fast->next->next;
        }
        if (slow != fast) {
            return NULL;
        }
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
        
    }
};

// naive solution
ListNode *detectCycle(ListNode *head) {

        unordered_set<ListNode*> res;
        ListNode* curr = head;

        while(curr != NULL){
            if(res.find(curr) != res.end()){
                return curr;

            }
            else{
                curr = curr->next;
                res.insert(curr);
            }

        }
        return NULL;
    }