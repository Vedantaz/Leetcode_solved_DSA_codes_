class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() == 0) return{};
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        

        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int start=i+1, end = nums.size()-1;

            while(start<end){

                int val = nums[i]+nums[start]+nums[end];

                if(val == 0) {
                
                    res.push_back({nums[i], nums[start], nums[end]}); 
                    while(start<end && nums[start] == nums[start+1]) start++;
                    while(start<end && nums[end] == nums[end-1]) end--;
                    start++;
                    end--;

                }
                else if(val<0)start++;
                else end--;
            }
        }
        return res;
    }
};