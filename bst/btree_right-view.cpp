// pNo. 199

void view(TreeNode* root, vector<int> &res, int level, int *maxLevel){
        if(root == NULL) return ;
        if(*maxLevel < level){
            *maxLevel = level;
            res.push_back(root->val);

        }
        view(root->right, res, level+1,maxLevel );
        view(root->left, res, level+1, maxLevel);
       

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        int maxLevel = 0;
        view(root, res, 1, &maxLevel);
        return res;

    }