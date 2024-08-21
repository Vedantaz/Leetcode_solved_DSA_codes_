class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return 0;
        unordered_map<char, int> res;

        for(int i=0;i<t.size();i++){
            res[t[i]]++;
        }
        for(char c:s){
            res[c]--;
            if(res[c]<0) return 0;
        }
        return 1;
    }
};

// my code - 12ms

// most optimal code for it is 0 ms

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return 0;
        
        // Create two count arrays to store the frequency of each character
        int countS[26] = {0}, countT[26]={0};
        
        for (int i = 0; i < s.length(); ++i) {
            ++countS[s[i] - 'a'];
            ++countT[t[i] - 'a'];
        }
        
        // Compare the frequency arrays
        for (int i = 0; i < 26; ++i) {
            if (countS[i] != countT[i]) return 0;
        }
        
        return 1;
    }
};