class Solution {
public:
    TreeNode* buildTree(vector& preorder, vector& inOrder) {
        unordered_map<int,int>m;
        for(int i=0;i<inOrder.size();i++)
            {m[inOrder[i]]=i;}
        TreeNode* root=buildTree(preorder,0,preorder.size()-1,inOrder,0,inOrder.size()-1,m);
        return root;
    }
    TreeNode* buildTree(vector<int> pre,int pstart,int pend,vector<int> in,int inStart,int inend,unordered_map<int,int>m)
    {
        if(pstart>pend || inStart>inend)
        return NULL;
        TreeNode*root= new TreeNode(pre[pstart]);
        int inroot=m[root->val];
        int numleft= inroot-inStart;
        root->left=buildTree(pre,pstart+1,pstart+numleft,in,inStart,inroot-1,m);
        root->right=buildTree(pre,pstart+numleft+1,pend,in,inroot+1,inend,m);
        return root;
    }
};