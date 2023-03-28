class Solution {
public:
    int res = 0 ;

    int height(TreeNode* root){
     if(root == NULL) return 0;
     int l = height(root->left);
     int r = height(root->right);
     
     res = max(res, l+r+1);
     return 1+max(l, r);

}
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == NULL) return 1;
        height(root);
        return res-1;
    }
};