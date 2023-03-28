class Solution {
public:
    bool res = false;
    bool match(TreeNode* root, TreeNode* subRoot){

      
      if(root != NULL && subRoot != NULL){
        bool a = match(root->left, subRoot->left);
        bool b = match(root->right, subRoot->right);

        if((root->val == subRoot->val) && a && b) return true;
        else return false;

       }
       if(subRoot == NULL && root == NULL) return true;
       else return false;

    }
    void inOrder(TreeNode* root, TreeNode* subRoot){
        if(root != NULL){
            inOrder(root->left, subRoot);

            bool x = match(root, subRoot);
            if(x){res = x;}

            inOrder(root->right, subRoot);

        }
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot){
        inOrder(root, subRoot);
        return res;

    }
};