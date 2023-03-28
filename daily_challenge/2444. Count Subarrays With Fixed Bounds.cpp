class Solution {
public:
    long long countSubarrays(vector<int>& a, int minK, int maxK) {
        long long ans = 0;
        int minp = -1, maxp =-1, lb = -1;
        for( int i=0; i<a.size(); ++i ){
            if(a[i] < minK || a[i] > maxK){
                
                lb=i;

            }
            if(a[i] == minK){
                minp = i;
                
            }
            if(a[i] == maxK){
                maxp = i;

            }
            ans += max(0, min(maxp,minp )-lb);

        }
        return ans;
    }
};