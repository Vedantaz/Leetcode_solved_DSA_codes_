class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> res;
        for(int i=0;i<nums.size();i++){
            int val = target-nums[i];
            if(res.find(val) != res.end()){
                return {res[val]+1,i+1};
            }
            res[nums[i]] = i;
        }
        
        return {};
    }
};

// my code 8ms

// most optmized code //

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int st=0;
        int end = numbers.size()-1;
        vector<int>sol;
        while(st<end)
        {
            int sum = numbers[st]+numbers[end];
            if(sum==target)
            {
                sol.push_back(st+1);
                sol.push_back(end+1);
                break;
            }
            if(sum<target)st++;
            else end--;
        }
        return sol;
    }
};