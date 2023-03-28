// my wrong code


//  int minimumDeviation(vector<int>& nums) {
//         int n = nums.size();
//         int i=0;
//         int countL =0 , countF = 0;

//         while(n--){
          
//         if(countL == 0){

        
//         if(nums[n-1] %2 == 0) nums[n-1] = nums[n-1] / 2; countL++;
//         }
//         if(countF == 0){
//         if(nums[i]%2 != 0) nums[i] = nums[i]*2; countF++;
//         }
//         i++;

//     }
//     int r = 0;
//     int maxd = 0;
//     for(int i=1; i<n; i++){
//         int r = i-1;
//         if(nums[i]  - nums[r] > maxd) maxd = (nums[i] - nums[r] );
//     }
//     return maxd;
        
//     }


class Solution {
public:
    int minimumDeviation(vector<int>& nums) {   
        priority_queue<int> pq;
        int m = INT_MAX;
        for(int n:nums){
            if(n %2 == 1) n*= 2;
            pq.push(n);
            m = min(m,n);

        }
        int res = INT_MAX;
        while(true){    
            int t = pq.top(); pq.pop();
            res = min(t-m,res );
            if(t%2 == 1) break;
            m = min(m, t/2);
            pq.push(t/2);

        }
        return res;
        
    }
};