
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        
    }
};

// 4ms


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        v.clear();
        if(root == NULL)return v;
        queue<pair<TreeNode*,int>>q;
        int level = 0;
        q.push({root,0});
        while(!q.empty())
        {
            vector<int>ans;
            ans.clear();
            while(q.front().second == level)
            {
                TreeNode* curr = q.front().first;
                int x = q.front().second;
                q.pop();
                ans.push_back(curr->val);
                if(curr->left!=NULL)
                {
                    q.push({curr->left,level+1});
                }
                if(curr->right!=NULL)
                {
                    q.push({curr->right,level+1});
                }
            }
            v.push_back(ans);
            level++;
        }
        return v;

    }
}; 
// 0 ms
