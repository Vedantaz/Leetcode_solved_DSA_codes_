class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0)return 1;
        if(t.size()<s.size()) return 0;
        int j=0;
        for(int i=0;i<t.size();i++){
            if(s[j] == t[i]){
                j++;
                if(j==s.size())return 1;    
            }
        }   
        return j==s.size();
    }
};

// my and optimised code 0 ms
