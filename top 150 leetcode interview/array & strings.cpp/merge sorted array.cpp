most optimized soltuion  - 0 ms 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> newVec;

        for (int i = 0; i < m; i++) {
            if (nums1[i] == 0)
                continue;
            newVec.push_back(nums1[i]);
        }

        for (int i = 0; i < n; i++) {
            if (nums2[i] == 0)
                continue;
            newVec.push_back(nums2[i]);
        }

        for (int i = 0; i < newVec.size(); i++) {
            nums1[i] = newVec[i];
        }

        for (int i = newVec.size(); i < nums1.size(); i++) {
            nums1[i] = 0;
        }

        sort(nums1.begin(), nums1.end());
    }
};


// my code
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};