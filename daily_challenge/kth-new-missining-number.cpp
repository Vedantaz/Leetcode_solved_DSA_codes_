class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        vector<int> res;
        int i=1;
        while(res.size() <= 1000){
            if(binary_search(arr.begin(), arr.end(), i) == 1){
                i++;
                continue;

            }
            res.push_back(i);
            i++;
        }
        return res[k-1];
    }
};