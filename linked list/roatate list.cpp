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
int size(ListNode* head){
    int n = 0;
    while(head!= NULL){
        n++;
        head = head->next;

    }
    return n;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)return head;
        int n = size(head);
        int loop = k%n;
        loop = n-loop;  // for attaching the reverse from the backside node to the first head;

        if(n == 1 || loop == n){
            return head;

        }
        int j=0;
        ListNode* temp = head;
        ListNode* firstAdd = head;
        while(temp != NULL){
            j++;
            if(j == loop){
                firstAdd = temp->next;
                temp->next = NULL;
                break;

            }
            temp = temp->next;

        }
        temp = firstAdd;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = head;
        return firstAdd;


    }
};