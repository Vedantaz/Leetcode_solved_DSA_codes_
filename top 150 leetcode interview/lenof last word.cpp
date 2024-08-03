    // 4 ms
    class Solution {
    public:
        int lengthOfLastWord(string s) {
            int len=0;
            int i= s.size()-1;

            while(i>=0 && s[i]==' '){
                i--;
            }
            while(i>=0 && s[i]!=' '){
                len++;
                i--;
            }
            return len;
        }
    };


    // ./// the best optimal solution is 0ms 
    class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool counting = false;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                length++;
            }
            else if (counting) {
                break;
            }
        }
        
        return length;
    }
};