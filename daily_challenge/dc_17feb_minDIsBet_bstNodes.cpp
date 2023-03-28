class Solution {
public:
    int minV = INT_MAX;
    TreeNode* preval;
    void Inorder(TreeNode* root){
         if(root == NULL ) return;
         Inorder(root->left);
         if(preval != NULL){
             minV = min(minV, root->val - preval->val);

         }
         preval = root;

         Inorder(root->right);

    }
    int minDiffInBST(TreeNode* root) {
       Inorder(root);
       return minV;

        
        
    }
};
