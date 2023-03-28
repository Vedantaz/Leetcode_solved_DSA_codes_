class Solution {
public:
    vector<int> dr = {0,0,1,-1};
    vector<int> dc = {1,-1,0,0};
    bool isPos(int r, int c, int n){
        return (r>=0 && c>=0 && r<n && c<n);

    }
    int maxDistance(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<vector<int>> dist(n,vector<int>(n,-1));
        queue<vector<int>> q;

        for(int i=0; i<n; i++){

         for(int j=0; j<n; j++){
            if(grid[i][j] == 1){
                dist[i][j] = 0;
                q.push({i,j});

            }

         }
        }
        int res = 0;
        while(!q.empty()){
            vector<int> v = q.front();
            q.pop();
            int r = v[0];
            int c = v[1];
            if(grid[r][c] == 0){
                res = max(res, dist[r][c]);

            }
            for(int i=0; i<4; i++){
                int nr = r+dr[i];
                int nc = c+dc[i];
                if(isPos(nr,nc, n) && dist[nr][nc] == -1){
                    
                    dist[nr][nc] = dist[r][c]+1;
                    q.push({nr, nc});

                }
            }
        }
        return(res == 0 ? -1:res);
    }
};