class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size() != t.size()) return 0;
        unordered_map<char, char> ss,tt;

        for(int i=0;i<s.size();i++){
            char c1 = s[i];
            char c2 = t[i];    

            if(ss.count(c1)>0){
                if(ss[c1]!= c2) return 0;

            }else ss[c1] = c2;

            if(tt.count(c2) >0){
                if(tt[c2]!=c1) return 0;
            }else tt[c2] = c1;  
        }
        return 1;
    }
};

// my code - 4ms

// more optimal code - 0ms

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int hash[256]={0};
        bool check[256]={0};

        for(int i = 0; i<s.size(); i++){
            if(hash[s[i]]==0 && check[t[i]]==0){
                hash[s[i]]=t[i];
                check[t[i]]=1;
            }
        }
        for(int i=0; i<s.size(); i++){
            if(hash[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
        
    }
};
