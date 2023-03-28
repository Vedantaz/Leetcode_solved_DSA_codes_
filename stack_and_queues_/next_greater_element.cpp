class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& l1, vector<int>& l2) {
        unordered_map <int, int> res;
        stack<int> st;
        int n = l2.size();
        for(int i=n-1; i>=0; i--){

            int val = l2[i];
            while(!st.empty() && st.top() <= val){
                  st.pop();
            }
            int ans = (st.empty())?-1 : st.top() ;
            res.insert({val, ans});
            st.push(val);
    
        } 
        vector <int> so;
        for(auto x: l1){
            so.push_back(res[x]);
        }
        return so;
    }
};