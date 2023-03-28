class Solution {
public:
    int minReorder(int n, vector<vector<int>>& con) {
            vector<int> adj[n];

            
            bool visited[n];
            set<pair<int, int>> s;

            memset(visited, false, sizeof(visited));


            for(int i=0;i<con.size();i++){

                adj[con[i][0]].push_back(con[i][1]);
                adj[con[i][1]].push_back(con[i][0]);
                s.insert({con[i][0], con[i][1]});
            }
    
            queue<int> q;
            q.push(0);
            int cnt =0 ;
            while(!q.empty()){
                int k = q.front();
                q.pop();
                if(!visited[k]){
                    visited[k] = true;
                    for(int i=0; i<adj[k].size(); i++){
                        q.push(adj[k][i]);
                        if(!visited[adj[k][i]] && s.count({k, adj[k][i]})){
                            cnt++;

                        }

                    }
                }
            }
            return cnt;


    }
};