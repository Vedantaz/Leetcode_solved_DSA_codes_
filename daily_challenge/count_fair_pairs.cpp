long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size(), i=0;
        long long count =0 ;
        unordered_map <int, int> mp;
        while(i<n){
            int r = n-i;
            
            
            if(lower>nums[i]) i++;
            if(nums[r] >upper) r--;
            if(nums[i]>=lower && nums[r]<upper) 
                mp[(nums[i], nums[r])] = 1;
                count++;
            
        
        
        }
        return count;