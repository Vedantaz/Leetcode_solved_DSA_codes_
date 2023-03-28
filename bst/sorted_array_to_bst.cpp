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

    TreeNode* get(vector<int> &nums, int start, int finish){
        if( start > finish ) return NULL;

        int mid = start + (finish - start )/2;
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = get(nums, start, mid-1);
        root->right = get(nums, mid+1, finish);
 
        return root;

    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() ==0) NULL;

        return get(nums, 0, nums.size()-1);


        
    }
};