class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.empty()) return res;

        int start=nums[0], end=nums[0];

        for(int i=1;i<nums.size();i++){

            if(nums[i] == end+1) end = nums[i];

            else{
                if(start == end) res.push_back(to_string(start));
                else{
                    res.push_back(to_string(start) + "->" + to_string(end));

                }
                start = nums[i];
                end = nums[i];
            }

        }
        if (start == end) {
            res.push_back(to_string(start));
        } else {
            res.push_back(to_string(start) + "->" + to_string(end));
        }
        return res;
        
    }
};

// code developed and have 3ms


// optimized code of 0 ms is

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string> result;
        string res="";
        if(n==0) return result;
        if(n==1) 
        {          
            res=to_string(nums[0]);
            result.push_back(res);
            return result;
        }
        
        long long start=nums[0];
        long long diff;
        
        for(int i=1;i<n;i++)
        {
            diff=(long long)nums[i]-(long long)nums[i-1];
            if(diff>1 )
            {
                if(start==nums[i-1])
                {
                    res=to_string(start);
                    result.push_back(res);
                    start=nums[i];
                    continue;
                }
                res=to_string(start);
                res+="->";
                res=res+to_string(nums[i-1]);
                result.push_back(res);
                start=nums[i];
            }
            
           
        }
        if(start==nums[n-1])
        {
            res=to_string(start);
            result.push_back(res);
        }
        else
        {
            res=to_string(start);
            res+="->";
            res=res+to_string(nums[n-1]);
            result.push_back(res);
            
        }
        return result;
    }
};