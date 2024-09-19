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

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> inMap;
        for (int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }

        // Postorder index starts from the last element
        int postIndex = postorder.size() - 1;

        // Build the tree using a helper function
        return build(inorder, postorder, 0, inorder.size() - 1, postIndex, inMap);
    }

    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int& postIndex, unordered_map<int, int>& inMap) {
        if(inStart>inEnd) return nullptr;

        int rootVal = postorder[postIndex--];
        TreeNode* root = new TreeNode(rootVal);

        // Split the inorder array into left and right subtrees
        int inIndex = inMap[rootVal];  // Fetch index of root from the hashmap

        root->right = build(inorder, postorder, inIndex + 1, inEnd, postIndex, inMap);
        root->left = build(inorder, postorder, inStart, inIndex - 1, postIndex, inMap);

        return root;
    }
};

// 14 ms

