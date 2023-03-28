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
    bool isCompleteTree(TreeNode* root) {

        // we have to find if at last the element is not and opthers have it  > then return true;

        // otherwise return false;

        queue<TreeNode*> q;
        q.push(root);
        bool flag = false;
       
        while (!q.empty()) {

            TreeNode* cal = q.front();
            q.pop();

            if(cal == NULL) flag = true;
            else{
                if(flag)  return false;
                q.push(cal->left);
                q.push(cal->right);

            }

        }
        return true;
        

    }
};

// best solution in a binary tree;

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
    int numNode(TreeNode* root){
        if(root == nullptr){
            return 0;
        }

        return 1 + numNode(root->left) + numNode(root->right);
    }

    bool isComplete(TreeNode* root, int index, int number_nodes){
        if (root == NULL)
        return (true);
 
    // If index assigned to current node is more than
    // number of nodes in tree, then tree is not complete
    if (index >= number_nodes)
        return (false);
 
    // Recur for left and right subtrees
    return (isComplete(root->left, 2*index + 1, number_nodes) &&
            isComplete(root->right, 2*index + 2, number_nodes));
    }

    bool isCompleteTree(TreeNode* root) {
        int n = numNode(root);
        return isComplete(root, 0, n);
    }
};