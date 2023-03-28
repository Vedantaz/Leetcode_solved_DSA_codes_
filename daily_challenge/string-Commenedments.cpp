#include <iostream>
#include <unordered_map>
#include<string>
#include<vector>
using namespace std;


unordered_map<char, int> res;
unordered_map<char,int> compress(vector<char>& chars) {
       
        int l = chars.size();
        string ans = "";
        if(l == 1) return res;
        
        for(char c : chars){
            res[c]++;

        }

        for(auto &x: res){
            ans += x.first;
            ans += x.second;
            
        }

        return res;

    }

int main(){
    vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};

    
    compress(chars);
    for(auto x:res){
        cout<<x.first<<" "<< x.second<<endl;
    }
  
    
}

/// correct code  // 



#include <string>
#include <unordered_map> 
class Solution {
public:
    int compress(vector<char>& chars) {
       
       int i=0, n = chars.size(); 
       int newLen = 0;

       while(i<n){
           int j = i;
           while(j<n && chars[j] == chars[i]){
               j++;
           }
           chars[newLen++] = chars[i];
           if(j-i>1){
               for(char c: to_string(j-i)){
                   chars[newLen++] = c;

               }
           }
           i=j;
       }
       return newLen;
    }
};