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
    
    int getLeftHt(TreeNode* root){
        int ht = 0;
        while(root){
          ht++;
          root = root->left;
        }
        return ht;
    }   

    int getRightHt(TreeNode* root){
        int ht = 0; 
        while(root){
          ht++;
          root = root->right;
        }
        return ht;
    }

    int countNodes(TreeNode* root) {
        
        if(root == nullptr) return 0;

        int leftHt = getLeftHt(root);

        int rightHt = getRightHt(root);

        if(leftHt == rightHt){
            return (1 << leftHt) - 1;
        }else { 
            return 1+ countNodes(root->left) + countNodes(root->right);
        }
    }
};

// 30 ms

// 3ms

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == NULL)
            return 0;
        return countNodes(root->left) + countNodes(root->right)+1;
    }
};