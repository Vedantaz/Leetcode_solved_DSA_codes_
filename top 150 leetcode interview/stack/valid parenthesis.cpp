class Solution {
public:
    bool isValid(string s) {
        stack<char>res;
        for(char c: s){
            if(c=='(' || c=='{' || c=='['){
                res.push(c);
            }
            else{
                if(res.empty()) return 0;

                if((res.top() == '(' && c == ')') ||
                   (res.top() == '{' && c == '}') ||
                   (res.top() == '[' && c == ']')) {
                    res.pop();  
                } else {
                    return 0;
                }
            }
        }
        return res.empty();
    }
};

// my code  = 3ms

// optimsed code  = 0ms

class Solution {
public:
    bool isOpen(char c)
    {
        return c=='{' || c=='(' || c=='[';
    }
    bool isPair(char top, char str)
    {
        return (top=='{'&&str=='}' 
        || top=='(' && str==')' 
        || top=='[' && str==']');
    }
    bool isValid(string s) {
        int size = s.size();
        // if(size%2!=0) return false;
        stack<int> stk;
        for(int i=0;i<size;i++)
        {
            if(isOpen(s[i]))
             {   stk.push(s[i]);
             }
            else
            {
                if(stk.size()==0)
                 {
                    return false;
                 }
                 else if(!isPair(stk.top(), s[i]) )
                 {
                    return false;
                 }
                 else
                 {
                    stk.pop();
                 }
            }
        }
        return stk.empty();
    }
};