//  checking for palindrome using recursion
#include <iostream>
using namespace std;

bool palindrome(String str)

{
    int start = 0, end = str.length()-1;
    while(start<end){
        if(!isalnum(str[start]) ) start++;
        else if(!isalnum(str[end]) ) end--;

        else if(tolower(str[start])!=tolower(str[end])) 
                    return false;
        else{
            start++;
            end--;

        }
    }
    
    return true;
}

bool palindrome(int i, string& s){
    
    
    if(i>=s.length()/2) return true;
    
    if(s[i]!=s[s.length()-i-1]) return false;
    
    return palindrome(i+1,s);
}

int main()
{
    string str = "ABCDCBA";
    bool ans = isPalindrome(str);

    if (ans == true) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
    return 0;
}