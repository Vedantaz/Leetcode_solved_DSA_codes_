#include<algorithm>
// merge sort code
    
class Solution {
public:

    void merge(vector<int> &nums, int left, int mid, int right, vector<int> &res){
        int start1 = left;

        int start2 = mid+1;
        int n1 = mid-left+1;
        int n2 = right-mid;

        for(int i=0;i<n1;i++){
            res[start1+i] = nums[start1+i];
        }
        for(int i=0; i<n2;i++){
            res[start2+i] = nums[start2+i];

        }

        int i=0, j=0, k = left;
        while(i<n1 && j<n2){
            if(res[start1+i]<= res[start2 + j]){
                nums[k] = res[start1+i];
                i+=1;

            }
            else{
                nums[k] = res[start2+j];
                j+=1;

            }
            k+=1;



        }

        while(i<n1){
               nums[k] = res[start1+i];
               i++;
               k++;

        }
        while(j<n2){

        
               nums[k] = res[start2+ j];
               j++;
               k++;

        }

    };

    void mergesort(vector<int> &nums, int left, int right, vector<int> &res){
        if(left>=right){
            return;
        }

            int mid = (left+right)/2;
            mergesort(nums, left, mid, res);
            mergesort(nums, mid+1, right, res);
            merge(nums, left,mid,  right, res);

        
    };

    vector<int> sortArray(vector<int>& nums) {
        vector<int> res(nums.size());

        int r = nums.size();
        int l = 0;
        mergesort(nums, 0, nums.size()-1, res);

        return nums;

    }
};