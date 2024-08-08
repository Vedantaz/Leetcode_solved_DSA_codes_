class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix=strs[0];
        

        for(int i=0;i<strs.size();i++){
            int j=0;
            while(j<prefix.size() 
            && prefix[j] == strs[i][j] 
            && j<strs[i].size()){
                 ++j;
            }

            prefix = prefix.substr(0,j);    
            if(prefix.empty()) return "";
        }
        return prefix;
    }
};
// my code  3ms

// optimised code of 0 ms

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prev ="";
        int start=0;
        for(auto i:strs){
            if(start==0){
                prev=i;
                start++;
                continue;
            }
            string s="";
            for(int j=0;j<min(prev.size(),i.size());j++){
                if(i[j]==prev[j])s+=i[j];
                else break;
            }
            prev=s;
        }
        //if(prev==strs[strs.size()-1])return "";
        return prev;
    }
};