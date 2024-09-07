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
    unordered_map<int, int> res;

    TreeNode* tree( vector<int> preorder,int preStart, int preEnd, vector<int> inorder, int inStart, int inEnd){
        if (preStart > preEnd || inStart > inEnd) {
            return nullptr; // Base case when there are no elements to process
        }

        // The first element in preorder is the root
        int rootVal = preorder[preStart];
        TreeNode* root = new TreeNode(rootVal);

        int rootIndex = res[rootVal];
        int leftTreeSize = rootIndex - inStart; // Size of the left subtree

        // Recursively build the left and right subtrees
        root->left = tree(preorder, preStart + 1, preStart + leftTreeSize, inorder, inStart, rootIndex - 1);
        root->right = tree(preorder, preStart + leftTreeSize + 1, preEnd, inorder, rootIndex + 1, inEnd);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root= new TreeNode();
        int n = preorder.size();

        for(int i=0;i<n;i++){
            res[inorder[i]] = i;
        }
        return tree(preorder, 0, n-1, inorder, 0, n-1);
    }
};

// this is 37 ms

// optimized code - 0 ms


class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootIdx = 0;
        unordered_map<int,int> hmap;
        for (int i=0; i< inorder.size(); i++) {
            hmap[inorder[i]] = i;
            //value -> index mapping for inorder array
        }
        return build(preorder, inorder, rootIdx, 0, inorder.size()-1, hmap);
    }
    
    //***Note*** that rootIdx is passed as reference 
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int &rootIdx, int left, int right, unordered_map<int,int> &hmap) {
        
            if(left > right) return nullptr;
            int pivot = hmap[preorder[rootIdx]];
            TreeNode* node = new TreeNode(inorder[pivot]); //inorder[pivot] == preorder[rootIdx]
            rootIdx++;
            
            node->left = build(preorder, inorder, rootIdx, left, pivot-1, hmap);

            //rootIdx value gets changed after successive calls to build the left subtree
            //Since it is passed as reference, updated value of rootIdx is passed to build
            //the right subtree
            
            node->right = build(preorder, inorder, rootIdx, pivot+1, right, hmap);
                
            return node;
    }
};
