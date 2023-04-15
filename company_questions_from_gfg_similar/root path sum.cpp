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
class Solution {
public:
     void traverse( TreeNode* root, int sum, vector<int> & v){
        
        if(root==NULL)return;
    
        sum += root->val;
        
        if(root->left || root->right)
        {
            traverse(root->left,sum,v);
            traverse(root->right,sum,v);
        }
        else
        {
            v.push_back(sum);
        }
        
    }
    bool hasPathSum(TreeNode* root, int S) {
        vector<int> ans;
        int sum = 0;
        
        traverse(root,sum,ans);
        
        for(int i=0;i<ans.size();i++)
        {
            if(S==ans[i])
            {
                return true;
            }
        }
        
        return false;
    }
};