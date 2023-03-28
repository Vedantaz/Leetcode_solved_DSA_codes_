



int height(TreeNode* root){
        if(root == NULL) return 0;
        else return max(height(root->left), height(root->right))+1;


    }
    void inOrder(TreeNode* root, bool &ans){
        if(root != NULL) {
            inOrder(root->left, ans);
            
            int l = height(root->left);
            int r = height(root->right);
            if(abs(l-r) > 1) ans =  ans & false;

            inOrder(root->right, ans);


        }

    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        inOrder(root, ans);
        return ans;
    }