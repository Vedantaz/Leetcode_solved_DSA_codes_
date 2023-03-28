// swap function is built-in in cpp
// invert tree or mirror tree;
class Solution {
public:
    
    TreeNode* invertTree(TreeNode* root) {
       

       stack<TreeNode*> s;
       s.push(root);

       while(!s.empty()){
           TreeNode* node = s.top();
           s.pop();

           if(node != NULL){
               s.push(node->left);
               s.push(node->right);
               swap(node->left, node->right);


           }
       }
       return root;



    }
};
       

//  recursive solution by me :: correct 

class Solution {
public:
    
    TreeNode* invertTree(TreeNode* root) {
       

       if(root!= NULL){
           swap(root->left, root->right);
           invertTree(root->left);
           invertTree(root->right);
       }
       return root;



    }
};