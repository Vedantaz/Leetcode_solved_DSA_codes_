class Solution {
public:
    long long count(vector<int> &t, long long int timeGiven ){

        long long int ans =0 ;
        for(long long int x:t){
           ans += (timeGiven/x);
        }
        return ans;

    }
    long long minimumTime(vector<int>& time, int t) {
        // time taken by bus to complete one trip
        // with each totalTrips > minus it and decrease by 1 in time vector
        
        sort(time.begin(), time.end());

        long long int start = 1, end = (long long )time[0]*t;

        long long int ans = 0;

        while(start<= end){
            long long int mid = start + (end-start)/(long long)2;

            if(count(time, mid) >= (long long )t){
                ans = mid;
                end = mid-1;

            }
            else {
                start = mid+1;
            }
        }
        return ans;

    }
};