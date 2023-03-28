class Solution {
public:
    string removeDuplicates(string s, int k) {

        vector<pair<char, int>> st;
        for(auto x : s){
            if(st.size() == 0 || st.back().first != x){
                st.push_back({x,1});
            }
            else{
                st.back().second++;
            }

            if(st.back().second == k){
                st.pop_back();

            }
        }
        string c="";
        for(auto x:st){
            c.append(x.second, x.first);
        }

        return c;


    }
};