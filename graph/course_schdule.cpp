class Solution {
    public:

    bool dfsrec(int i, vector<bool> & visited, vector<bool> &currVisited , vector<int> adj[]){

        visited[i] = true;
        currVisited[i] = true;

        vector<int> value = adj[i];

        for(auto x: value){
            if(!visited[x]){
                if(dfsrec(x, visited, currVisited , adj)) return true;
            }
            else if(visited[x] && currVisited[x])
                return true;
        }
        currVisited[i] = false;
        return false;

    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int n = numCourses;
        vector<bool> visited(n, false) , currVisited(n, false);
        vector<int> adj[n];

        for(auto x: prerequisites){
            vector<int> value = x;
            int a = value[0];
            int b = value[1];

            adj[a].push_back(b);


        }

        for(int i=0; i<n; i++){
            if(!visited[i]){
                if(dfsrec(i, visited, currVisited, adj)) return false;

            }
        }

        return true;
    }
};

