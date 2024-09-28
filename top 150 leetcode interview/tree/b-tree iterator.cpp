/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
private:
    stack<TreeNode*>res;   

    void pushLeft(TreeNode* root){
        while(root != nullptr){
            res.push(root);
            root= root->left;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        pushLeft(root);
    }
    
    int next() {
        TreeNode* topNode = res.top();
        res.pop();

        if(topNode->right != nullptr){
            pushLeft(topNode->right);
        }

        return topNode->val;
    }
    
    bool hasNext() {
        return !res.empty();
    }
};

// 25 ms

// 3ms  is this  ->>

class BSTIterator {
public:
    stack<TreeNode*>st;

    BSTIterator(TreeNode* root) {
        auto temp=root;
        st.push(temp);
        while(temp->left!=nullptr){
            st.push(temp->left);
            temp=temp->left;
        }
    }
    
    int next() {
        auto node=st.top();
        st.pop();
        if(node->right!=nullptr){
            auto temp=node->right;
            st.push(node->right);
            while(temp->left!=nullptr){
                st.push(temp->left);
                temp=temp->left;
            }
        }
        return node->val;
        
    }
    
    bool hasNext() {
        if(st.empty()){
            return false;
        }
        return true;        
    }
};
