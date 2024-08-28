C++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x)   
 : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:   

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;   
 // An empty tree is symmetric
        }

        return isMirror(root->left, root->right);
    }

private:
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) {
            return true;   
 // Both subtrees are null, they are mirrors
        }

        if (left == nullptr || right == nullptr) {
            return false; // One subtree is null, they are not mirrors
        }

        if (left->val != right->val) {
            return false; // Values are not equal, they are not mirrors
        }

        // Recursively check the left and right subtrees
        return isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }
};

// 6ms developed

// 0ms here

class Solution {
public:
    bool isTreeSymmetric(TreeNode* leftRoot, TreeNode* rightRoot){
        if(leftRoot == nullptr && rightRoot == nullptr)
            return true;
        if((leftRoot == nullptr && rightRoot != nullptr)  || (leftRoot != nullptr && rightRoot == nullptr))
            return false;
        if(leftRoot -> val != rightRoot -> val)
            return false;
        return isTreeSymmetric(leftRoot -> left, rightRoot -> right) && isTreeSymmetric(leftRoot -> right, rightRoot -> left);
    }
    bool isSymmetric(TreeNode* root) {
        return isTreeSymmetric(root -> left, root -> right);
    }
};