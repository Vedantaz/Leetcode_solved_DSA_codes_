/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;  // If root is null, return null
        
        // Start with the root node
        Node* current = root;

        while (current) {
            // Dummy node to track the head of the next level
            Node* dummy = new Node(0);
            Node* tail = dummy;
            
            // Traverse the current level
            while (current) {
                if (current->left) {
                    tail->next = current->left;
                    tail = tail->next;
                }
                if (current->right) {
                    tail->next = current->right;
                    tail = tail->next;
                }
                // Move to the next node in the current level
                current = current->next;
            }
            
            
            // Move to the next level
            current = dummy->next;
        }
        return root;
    }
};

// 3ms

// 0 ms
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* prev = NULL;
            int size = q.size();
            for(int i =0;i<size;i++) {
                Node* curr = q.front();
                q.pop();
                if(prev) {
                    prev->next =curr;
                }
                prev = curr;               
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
        
        return root;
    }
};