        
        
        
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        if(root == NULL ) return res;
        while(1){
            int size = q.size();
            if(size == 0) return res;
            vector<int> value;
            while(size>0){
                TreeNode* temp = q.front();
                q.pop();
                value.push_back(temp->val);
                if(temp->left!= NULL) q.push(temp->left);

                if(temp->right != NULL) q.push(temp->right);

                size--;
            }
            res.push_back(value);
        }
        return res;