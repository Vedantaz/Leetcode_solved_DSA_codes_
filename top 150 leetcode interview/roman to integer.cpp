// 17 ms
class Solution {
public:
    int romanToInt(string str) {
        int ans = 0;
        unordered_map<char, int> res;
        
        res['I'] = 1;
        res['V'] = 5;
        res['X'] = 10;
        res['L'] = 50;
        res['C'] = 100;
        res['D'] = 500;
        res['M'] = 1000;

        for(int i = 0; i < str.length(); i++){
            
            if(res[str[i+1]] > res[str[i]]){
                ans += (res[str[i+1]] - res[str[i]]);
                i++;
            }
            else{
                ans = ans + res[str[i]];
            }
        }
        return ans;
    }
};


// most optimal solution 0ms

class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                if(s[i+1]=='V' || s[i+1]=='X'){
                    ans-=1;
                }
                else{
                    ans+=1;
                }
            }
            if(s[i]=='X'){
                if(s[i+1]=='L' || s[i+1]=='C'){
                    ans-=10;
                }
                else{
                    ans+=10;
                }
            }
            if(s[i]=='C'){
                if(s[i+1]=='D' || s[i+1]=='M'){
                    ans-=100;
                }
                else{
                    ans+=100;
                }
            }
            if(s[i]=='V'){
                ans+=5;
            }
            if(s[i]=='L'){
                ans+=50;
            }
            if(s[i]=='D'){
                ans+=500;
            }
            if(s[i]=='M'){
                ans+=1000;
            }
        }
        return ans;
    }
};