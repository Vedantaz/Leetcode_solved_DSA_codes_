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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        ListNode* mergedHead = nullptr;
        
        if (l1->val <= l2->val) {
            mergedHead = l1;
            l1 = l1->next;
        } else {
            mergedHead = l2;
            l2 = l2->next;
        }
        ListNode* curr = mergedHead;

        while (l1 && l2) {
            if (l1->val <= l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }


        if (l1) {
            curr->next = l1;
        } else if (l2) {
            curr->next = l2;
        }

        return mergedHead;
    }
};

// 11 ms code


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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // creating new LL
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

    while (list1 != nullptr && list2 != nullptr) {

        if (list1->val <= list2->val) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }

        temp = temp->next; 
    }

    // If any list still has remaining
    if (list1 != nullptr) {
        temp->next = list1;
    } else {
        temp->next = list2;
    }
    return dummyNode->next;

    }
};