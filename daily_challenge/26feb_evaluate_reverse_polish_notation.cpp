#include <regex>
#include <cctype>
#include <iostream>
#include <string>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto x: tokens){
            if(x == "+" || x == "/" || x == "-" || x == "*"){
                
                int r = s.top(); s.pop();
                int f = s.top(); s.pop();
                
                if(x == "+") s.push(f+r);

                if(x == "/" ) s.push(f/r);

                if(x == "-") s.push(f-r);

                if(x == "*") s.push(f*r); 

            }
            else{
                stringstream ss(x);   // function to change string to integer 
                int val;
                ss >> val;
                s.push(val);


            }
        }
        return s.top();

    }
};

