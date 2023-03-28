class Solution {
public:
    
    int minPathSum(vector<vector<int>>& matrix) {
        
        int dp[matrix.size()][matrix[0].size()];
        for(int i=0; i<matrix.size();i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(i==0 ){
                    if(j ==0 )dp[i][j] = matrix[i][j];
                    else{
                        dp[i][j] = dp[i][j-1]+matrix[i][j];
                    }
                    continue;

                }
                if(j ==0 ) {
                    dp[i][0] = dp[i-1][0]  + matrix[i][0];
                    continue;
                }
                dp[i][j] =min(dp[i][j-1] + matrix[i][j] , dp[i-1][j] + matrix[i][j]);

            }
        }
        return dp[matrix.size()-1][matrix[0].size()-1];

    }
};