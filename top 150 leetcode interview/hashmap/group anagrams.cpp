class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res;
        unordered_map<string,vector<string>> words_group;

        for(string s:strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            words_group[sorted].push_back(s);
        }
        
        for(auto group: words_group){
            res.push_back(group.second);
        }
        return res;
    }
};

// my code - 24ms

// this code is 3ms
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans ; 
        int n = strs.size();
        unordered_map<string , vector<string>> m ;
        for(int i = 0 ; i < n ; i++){
            string temp = strs[i];
            sort(temp.begin() , temp.end());
            m[temp].push_back(strs[i]);
        }
        for(auto it : m){
            ans.push_back(it.second);
        }
        return ans;
            
    }
};