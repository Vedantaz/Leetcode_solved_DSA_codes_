class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n+1, 0);
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            a[nums[i]]++;
            if(a[nums[i]] == 2) ans.push_back(nums[i]); 
        }
        return ans;
    }
};