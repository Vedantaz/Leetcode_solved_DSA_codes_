class Solution {
public:
    bool isPalindrome(string s) {
        string res="";

        for(char c:s){
            if(isalnum(c)) res+=tolower(c);
        }

        int start=0, end=res.size()-1;
        while(start<end){
            if(res[start] != res[end]) return 0;
            start++;
            end--;
        }
        return 1;
    }
};

// my code 3ms

// optimised code 0ms 
class Solution {
public:
    bool isPalindrome(string s) {
        for(char& x: s){
            x = tolower(x);
        }
        string str = "";
        for(char x: s){
            if(isalnum(x)){
                str += x;
            }
        }
        string palindrome = str;
        reverse(palindrome.begin(), palindrome.end());
        if(str == palindrome){
            return true;
        }
        return false;
    }
};