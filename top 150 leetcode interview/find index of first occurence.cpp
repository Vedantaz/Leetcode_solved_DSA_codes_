class Solution {
public:
    int strStr(string haystack, string needle) {

int hLen = haystack.size();
    int nLen = needle.size();

    if (nLen == 0) return 0;  // If needle is empty, return 0
    if (nLen > hLen) return -1;  // If needle is longer than haystack, return -1

    for (int i = 0; i <= hLen - nLen; ++i) {
        if (haystack.substr(i, nLen) == needle) {
            return i;  // Return the first index where needle is found
        }
    }

    return -1;  // If needle is not found, return -1
    }
    }