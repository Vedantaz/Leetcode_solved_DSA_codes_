 
//  first naive method 
 
 
//   bool findPath(TreeNode* root, vector<TreeNode*> &res, TreeNode* n){
//         if(root == NULL)return false;
//         res.push_back(root);

//         if(root == n) return true;

//         if(findPath(root->left, res, n) || findPath(root->right, res, n)) return true;

//         res.pop_back();
//         return false;

//   }
//  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//             vector<TreeNode*> res1, res2;
//             if(!findPath(root, res1, p) || !findPath(root, res2, q))  return NULL;
//             TreeNode* res = NULL;
            
//             for(int i=0; i<res1.size() && i<res2.size(); i++){
//                 if(res1[i] == res2[i]) res = res1[i];

//             } 
//             return res;
//  }

// Effective solution 


TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        

        if(root == NULL) return NULL;

        if ( root == p ||  ro   ot == q ) return root;

        TreeNode* res1 = lowestCommonAncestor(root->left, p, q);
        TreeNode* res2 = lowestCommonAncestor(root->right, p, q);

        if(res1 != NULL && res2 != NULL) return root;

        if(res1 != NULL)return res1;
        else return res2;


    }