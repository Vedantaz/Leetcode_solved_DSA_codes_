// 31 my code

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int productall = 1;
        int n = nums.size();
        vector<int> res(n,1);
        for(int i=0;i<n;i++){
            res[i] = productall;
            productall *= nums[i];
            
        }
        productall=1;
        for(int i=n-1;i>=0;i--){
            res[i] *= productall;
            productall *= nums[i];
        }
        return res;
    }
};

// optimised code -- 3ms
        
        int zc = 0, prd = 1;
        for(int i : nums)
        {
            if(i == 0) zc++;
            else prd *= i;
        }
        vector<int> ret(nums.size(), 0);
        if(zc >= 2) return ret;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0) ret[i] = prd;
            if(!zc) ret[i] = prd/nums[i];
        }
        return ret;