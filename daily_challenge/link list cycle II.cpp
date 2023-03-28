/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Naive solution 

#include<unordered_map>

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {


        unordered_set<ListNode*> res;
        ListNode *curr = head;
        while(curr!= NULL){

            if(res.find(curr) != res.end()) return curr;
            else {
                res.insert(curr);
                curr = curr->next;

            }
        }
        return NULL;
        
    }
};


// better approach in O(1)..

// of slow and fast
