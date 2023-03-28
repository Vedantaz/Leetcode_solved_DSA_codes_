class Solution {
public:

    vector<int>  prev_smaller(vector<int> &heights){
        vector<int> res;
        stack<int> st;
        int n = heights.size();

        for(int i=0; i<n; i++){
            while(st.empty() == false && heights[st.top()] >= heights[i]){
                st.pop();
            }
            int val = (st.empty()) ? -1 :st.top();
            res.push_back(val);
            st.push(i);

        }
        return res;
    }
    
    vector<int> next_smaller(vector<int> &heights){
        vector<int> res;
        stack<int>st;
        int n = heights.size();

        for(int i=n-1; i>=0; i--){
            while(st.empty()  == false && heights[st.top()] >= heights[i]){
                st.pop();
                
            }
            int val = (st.empty()) ?  n: st.top();
            res.push_back(val);
            st.push(i);
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
    int largestRectangleArea(vector<int>& heights) {

        int res = 0;
        int n = heights.size();
        vector<int> prev = prev_smaller(heights);
        vector<int> next = next_smaller(heights);

        for(int i=0; i<n; i++){
            int curr = (next[i]-prev[i]-1) *heights[i];
            res = max(res, curr);

        }
        return res;

       
    }
};