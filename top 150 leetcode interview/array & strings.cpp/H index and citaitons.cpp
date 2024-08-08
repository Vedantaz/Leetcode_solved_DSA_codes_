class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int h=0, currenth=0;
        int n = citations.size();
        for(int i=0;i<n;i++){
            currenth = n-i;
            if(citations[i]>=currenth){
                h = currenth;
                break;
            }
        }
        return h;
    }
};

// important and with 0 ms easy to go code