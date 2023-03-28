// how to do it >
// as we cant't get the middle element , 
// in the case of vector > we tried it > but says that the memory limit exceeded 

// for now , if we want to crete the bst from the list then > directly it as less and more ...

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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

    TreeNode* tree(vector<int> & res, int start, int finish){
        if(start>finish) return NULL;

        int mid = start+ (finish-start)/2;
        TreeNode* root = new TreeNode(res[mid]);

        root->left = tree(res, start, mid-1);
        root->right = tree(res, mid+1, finish);

        return root;

    }
    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int> res;

        ListNode* curr = head;
        while(curr != NULL){
            res.push_back(curr->val);
            curr = curr->next;

        }
        
        if(res.size() == 0) return NULL;
        int n = res.size();
        return tree(res, 0, n-1);

    }
};