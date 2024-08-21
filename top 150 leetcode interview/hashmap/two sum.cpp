class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> res;
        for(int i=0;i<nums.size();i++){
            int val =target-nums[i];
            if(res.find(val) != res.end()){
                return {res[val], i};
            } 
            res[nums[i]] =i;
        }
        return {};
    }
};