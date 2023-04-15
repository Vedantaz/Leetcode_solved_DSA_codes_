class Solution {
public:
    bool rotateString(string s1, string s2) {
        if(s1.size()!=s2.size())
        return false;
       return (s1+s1).find(s2)!=string::npos;
    }
};