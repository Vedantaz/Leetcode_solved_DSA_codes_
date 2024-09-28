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
    vector<double> averageOfLevels(TreeNode* root) {
        // level order traversal and as the level chanegd , the avg to get in the vector.

        vector<double> res;
        if(root == nullptr) return res;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            
            int size = q.size();
            double sum=0;

            for(int i=0;i<size;i++){

                TreeNode* value = q.front();
                q.pop();
                sum+=value->val;

                if (value->left != nullptr) {
                    q.push(value->left);
                }
                if (value->right != nullptr) {
                    q.push(value->right);
                }
            }
            res.push_back(sum/size);
        }
        return res;
    }
};

// 13ms

// 0 ms

class Solution {
public:
    void solve(queue<TreeNode*>& q,vector<double>& res,double& sum){

        if(q.empty()) return;

        int n=q.size();
        res.push_back((double)sum/n);
        sum=0;

        while(n){

            TreeNode* node=q.front();
            q.pop();

            if(node!=NULL){

                if(node->left!=NULL){q.push(node->left); sum+=node->left->val;}

                if(node->right!=NULL){q.push(node->right); sum+=node->right->val;}
            }
            
            n--;
        }
        
        solve(q,res,sum);

    }
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<double> res;
        double sum=root->val;
        q.push(root);

        solve(q,res,sum);
        return res;
    }
};