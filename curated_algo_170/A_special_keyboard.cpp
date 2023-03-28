#include <iostream>
using namespace std;


// eg: 
// zyxwvutsrqponmlkjihgfedcba 
// a
// abcdefghijklmnopqrstuvwxyz
// cba

class Solution {
  public:
    int findTime(string a, string b) {
        // code here
        int pos[26];
        int currentPos = 0;
        int totalTime = 0;
        for(int i = 0; i < s1.size(); i++){
            pos[s1[i]-'a'] = i;
        }
        for(int i = 0; i < s2.size(); i++){
            totalTime += abs(pos[s2[i]-'a'] - currentPos);
            currentPos = pos[s2[i]-'a'];
        }
        return totalTime;
    }
};

int main(){
    
    return 0;
}
