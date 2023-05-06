class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // buildheap(nums, k)
        // heapify , delete first and return second.

        // simple element
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // return nums[n-k];
        priority_queue<int> p(nums.begin(), nums.end());
        int ans =0;
        while(k--){
            ans = p.top();
            p.pop();

        }
        return ans;

        // by min heap
          priority_queue<int, vector<int> , greater<int>> p;
        for(auto x:nums){
            p.push(x);
            if(p.size()>k){
                p.pop();
            }
        }
        
        return p.top();

        
    }
};