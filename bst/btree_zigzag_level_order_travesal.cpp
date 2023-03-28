
//  my wrong ans 
if(root == NULL) return ans;
        else { 
            res.push_back(root->val);
            ans.push_back(res);
            res = {};
        
        }
        if(f == 1){
            if(root->right !=NULL && root->left != NULL){
              res.push_back(root->right->val);
              res.push_back(root->left->val);
              ans.push_back(res);
              zigzagLevelOrder(root->left);
              f = 0;
            }
        }
        else if(f == 0){

            if(root != NULL){
                res.push_back(root->left->val);
                res.push_back(root->right->val);
                ans.push_back(res);
                zigzagLevelOrder(root->right);
                f = 1;
            }
            else{
                zigzagLevelOrder(root->right);
                zigzagLevelOrder(root->left);
            }

        }
        return ans;


//  correct code is just like level order traversal 


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        int count=0;
        q.push(root);
        if(root == NULL){
            return ans;
        }

        while(1){
            int size = q.size();
            if(size ==0 ){
                return ans;
            }
            count++;
            vector<int> res;
            while(size>0){

            
               TreeNode* cal = q.front();
               q.pop();
               res.push_back(cal->val);
               if(cal->left!= NULL) q.push(cal->left);

               if(cal->right != NULL) q.push(cal->right);
               size--;

            }
        
            if(count%2 == 0){
                reverse(res.begin(), res.end());
            }
            ans.push_back(res);

        }
        
        
        return ans;

    }
};