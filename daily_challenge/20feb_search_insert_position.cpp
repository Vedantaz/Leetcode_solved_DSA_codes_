class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int rear=0, front=nums.size()-1;
        
        while(rear <= front){
            int mid = rear+(front-rear)/2;
            if((nums[mid]) == target) return mid;

            else if(nums[mid] > target) front = mid-1;
            else{
                rear = mid+1;

            }

        }
        
        return rear;
    }
};