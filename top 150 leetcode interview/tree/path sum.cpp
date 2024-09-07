class Solution {
public:
   
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        
        // If we reach a leaf node, check if the remaining targetSum equals the leaf's value
        if (!root->left && !root->right) {
            return targetSum == root->val;
        }
        
        // Recur for left and right children with the updated targetSum
        int newTarget = targetSum - root->val;
        return hasPathSum(root->left, newTarget) || hasPathSum(root->right, newTarget);
    
    }
};  

// 10 ms speed

// 0 ms speed

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        if(root->val==targetSum && !root->left && !root->right) return true;
        return hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val);
    }
};