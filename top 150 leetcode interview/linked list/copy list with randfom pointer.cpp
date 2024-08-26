/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        Node* curr = head;
        
        while(curr){
            Node* newNode = new Node(curr->val);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }

        curr = head;
        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        Node* newHead = head->next;
        curr = head;
        Node* newCurr = newHead;
        while (curr) {
            curr->next = curr->next->next;
            if (newCurr->next) {
                newCurr->next = newCurr->next->next;
            }
            curr = curr->next;
            newCurr = newCurr->next;
        }

        return newHead;
    }
};
// 11 ms developed code


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
        Node* curr=head;
        while(curr!=NULL)
        {
            Node* nn=new Node(curr->val);
            nn->next=curr->next;
            curr->next=nn;
            curr=nn->next;
        }
        curr=head;
        while(curr!=NULL)
        {
            if(curr->random)
                curr->next->random=curr->random->next;
            curr=curr->next->next;
        }
        Node* oh=head;
        Node* nh=head->next;
        Node* p1=oh;
        Node* p2=nh;
        while(p1!=NULL)
        {
            p1->next=p1->next->next;
            p2->next=p2->next?p2->next->next:NULL;
            p1=p1->next;
            p2=p2->next;
        }
        return nh;
    }
};