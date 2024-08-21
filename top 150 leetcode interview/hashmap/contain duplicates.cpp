class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> indexMap;

        for (int i = 0; i < nums.size(); i++) {
            if (indexMap.count(nums[i]) > 0 
            && i - indexMap[nums[i]] <= k) {
                return 1;
            }
            indexMap[nums[i]] = i; 
        }   

        return 0;
    }
};

// my code 115ms
