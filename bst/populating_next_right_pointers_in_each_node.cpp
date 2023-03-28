class Solution {
public:
    Node* connect(Node* root) {
        // it is similar to their level order traversal
        if(!root) return root;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){

            int s = q.size();
            if(s == 0) return root;

            while(s>0){
                Node* cal;

                if(s > 1){
                    cal = q.front();
                    q.pop();

                    Node* nextA = q.front();
                    cal->next = nextA;
                }
                else{
                    cal = q.front();
                    q.pop();
                }

                if(cal->left != NULL ) q.push(cal->left);

                if(cal->right != NULL ) q.push(cal->right);
                s--;

            }
        }
        return root;
    }

};