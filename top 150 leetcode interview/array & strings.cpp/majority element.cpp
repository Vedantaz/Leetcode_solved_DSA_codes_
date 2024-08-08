class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() <= 1) return nums[0];
        int oc=0, ele=nums[0];
        int len = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=1;i<len;i++){
            ele=nums[i];
            if(nums[i-1] == ele){
                oc++;
                if(oc == len/2) return ele;
            }
        }
        return ele;
    }
};