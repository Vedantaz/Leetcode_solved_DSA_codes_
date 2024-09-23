
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        
        while(curr){

            if(curr->left){
                TreeNode* rightmost =  curr->left;
                while(rightmost->right) rightmost = rightmost->right;
                rightmost->right = curr->right;
                curr->right = curr->left;
                curr->left = nullptr;

            }
            curr = curr->right;

            
        }

    }
};

// this is code developed  = 3ms

    /// 0ms code is ->> 

class Solution {
public:
    TreeNode* prev = NULL;
    
    TreeNode* flattenBT(TreeNode* root){
        if(root==NULL)
            return NULL;
        
        TreeNode* lft=flattenBT(root->left);
        root->left=NULL;
        TreeNode* rght=flattenBT(root->right);
        
        if(lft){
            root->right=lft;
            
            while(lft->right){
                lft=lft->right;
            }
            
            lft->right=rght;
        }
        
        return root;

    }
    void flatten(TreeNode* root) {
       flattenBT(root);
    }
};