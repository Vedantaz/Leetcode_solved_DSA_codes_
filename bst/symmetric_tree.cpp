

class Solution {
public:
bool res = true;
    bool match(TreeNode* root, TreeNode* subRoot){
        if(root != NULL && subRoot != NULL){
            bool a = match(root->left, subRoot->right);
            bool b = match(root->right, subRoot->left);

            if((root->val == subRoot->val ) && a && b){
                res = res && true;


            }
            else res = res && false;

        }
        else if(root == NULL & subRoot == NULL){
            return true;
        }
        else { return false; }
        return res;

    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* subRoot = root;
        if(root == NULL) return true;
        
        if(root->left == NULL && root->right ==NULL) return true;

        return match(root->left, root->right);

    }
};