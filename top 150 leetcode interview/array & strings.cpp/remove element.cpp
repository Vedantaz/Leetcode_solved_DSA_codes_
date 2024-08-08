class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0; // Pointer for elements to keep
        for (int fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};

// this is the optimised soltuion
