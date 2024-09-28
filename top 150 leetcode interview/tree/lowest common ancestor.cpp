/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case 1: If the root is null, return null
        if (root == nullptr) {
            return nullptr;
        }
        
        // Base case 2: If the root is either p or q, return root
        if (root == p || root == q) {
            return root;
        }

        // Recurse on the left and right subtrees
        TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);
        
        // If both leftLCA and rightLCA are non-null, then the current root is the LCA
        if (leftLCA != nullptr && rightLCA != nullptr) {
            return root;
        }

        // If only one of the subtrees returns a node, return that node
        return (leftLCA != nullptr) ? leftLCA : rightLCA;
    }
};

// 8 ms

// 1ms

