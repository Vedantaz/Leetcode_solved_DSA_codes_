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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0 || !head->next) return head;

        ListNode* curr = head;
        vector<int> res;

        while(curr){
            res.push_back(curr->val);
            curr = curr->next;
        }

        k = k%res.size();
        if(k==0) return head;

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        for(int i=res.size()-k;i>res.size();i++){
            temp->next = new ListNode(res[i]);
            temp = temp->next;
        }

        for(int i=0;i<res.size()-k;i++){
            temp->next = new ListNode(res[i]);
            temp = temp->next;
        }
        return dummy->next;
    }
};

// with using extra space  8ms, 17 mb


// now without using extra space 3ms



