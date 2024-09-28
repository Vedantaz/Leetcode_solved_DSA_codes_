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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root == nullptr) return res;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            int rightMostValue;
            
            for(int i=0;i<size; i++){
                TreeNode* node = q.front();
                q.pop();

                rightMostValue = node->val;

                if(node->left != nullptr){
                    q.push(node->left);
                }

                if(node->right!=nullptr){
                    q.push(node->right);
                }
            }
            res.push_back(rightMostValue);
        }
        return res;
    }
};

// 3ms

///  0 ms


class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int maxLevel = 0;
        rightSideView(root, ans, 1, maxLevel);
        return ans;
    }

    void rightSideView(TreeNode* root, vector<int> &ans, int level, int &maxLevel) {
        if (root == NULL)
            return;
        if (level > maxLevel) {
            ans.push_back(root -> val);
            maxLevel = level;
        }
        rightSideView(root -> right, ans, level + 1, maxLevel);
        rightSideView(root -> left, ans, level + 1, maxLevel);
    }
};