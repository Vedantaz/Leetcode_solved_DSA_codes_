#include <iostream>
#include <array>
#include <vector>
using namespace std;

int divisible_subset(){
        int n = nums.size();
        vector<int> res;
        if(n==0)return ans;

        sort(nums.begin(), nums.end());
        int mx = 1;
        vector<int> dp(n+1,1);    // dynamic programming : dp with (length, values to be filled at all places)


        for(int i=1; i<n; ++i){
          
            for(int j=0; j<i; ++j){
                if(nums[i]%nums[j] == 0 && 1+dp[j]>dp[i])   
                { 
                    dp[i] = 1+dp[j];
                    if(mx<dp[i])mx = dp[i]; 
                }
            }
        }
        // retrieve the elements
        int prev= -1;
        for(int i=n-1; i>=0 i--){
            if(dp[i] == mx && (prev%nums[i] == 0 || prev == -1)){
                res.push_back(nums[i]);
                mx = -1;
                prev = nums[i];
            }
        }
        
        return res;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int n = nums.size();      // it defines the width
    std::cout << n << std::endl;
    return 0;
}