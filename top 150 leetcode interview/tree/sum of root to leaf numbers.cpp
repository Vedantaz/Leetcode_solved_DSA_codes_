
class Solution {
public:

    int dfs(TreeNode* node, int currNumber){
        
        if(!node) return 0;

        currNumber = currNumber*10 + node->val;

        if( !node->left && !node->right ){
            
            return currNumber;

        }

        return dfs(node->left, currNumber) + dfs(node->right, currNumber);

    }

    int sumNumbers(TreeNode* root) {
        
        return dfs(root, 0);
    }
};

// 5 ms speed

// 0ms speed

class Solution {
    int sum(TreeNode* root,int add)
    {
        if(root==nullptr) return add;
        
        add=add*10;
        int leftsum=sum(root->left,add+root->val);
        int rightsum=sum(root->right,add+root->val);
        if(root->left==nullptr)
        return rightsum;
        if(root->right==nullptr)
        return leftsum;
        else
        return rightsum+leftsum;
    }
public:
    int sumNumbers(TreeNode* root) {
        return  sum(root,0);
    }
};