
class Solution {
public:
    vector<vector<int>> zigzagOrder(TreeNode* root) {
            vector<vector<int>> res;
            if(!root) res;

            queue<TreeNode*> q;
            int level =0;
            q.push(root );
            bool lToR = true;



            while(!q.empty()){
                int level = q.size();
                vector<int> currLevel;
                for(int i=0;i<q.size(); i++){
                    TreeNode* node = q.front();
                    q.pop();

                    if(lToR){
                        currLevel.push_back(node->val);

                    }else{
                        currLevel.insert(currLevel.begin(), node->val);

                    }

                    if(node->left != nullptr) q.push(node->left);

                    if(node->right != nullptr) q.push(node->right);
                }
                res.push_back(currLevel);
                lToR = !lToR;
            }
            return res;

       
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
