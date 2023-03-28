class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        
        unordered_map<string, vector<string>> mp;

        for(auto x: strs){
            string f = x;
            sort(x.begin(), x.end());
            mp[x].push_back(f);

        }

        for(auto x: mp){
            res.push_back(x.second);

        }
        return res;
        

    }
};