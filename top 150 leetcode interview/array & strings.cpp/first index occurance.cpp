// solution is 2ms
class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.size();
        int nLen = needle.size();

        if (nLen == 0) return 0; 
        if (nLen > hLen) return -1;  

        for (int i = 0; i <= hLen - nLen; ++i) {
            if (haystack.substr(i, nLen) == needle) {
                return i;
            }
        }

    return -1;


    }
};


// 0 ms

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size())
            return -1;

        for (int i{0}; i <= haystack.size()-needle.size(); i++) {
            if (needle == haystack.substr(i, needle.size()))
                return i;
        }
        return -1;
    }
};