class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;

        for (const string& token : tokens) {
            if(token == "+" || token =="-" || token == "/" || token == "*"){
                int b = res.top();
                res.pop();
                int a = res.top();
                res.pop();
                if(token =="+") res.push(a+b);
                else if(token =="/") res.push(a/b);
                else if(token =="*") res.push(a*b);
                else res.push(a-b);
            }else{
                res.push(stoi(token));
            }
        }
        return res.top();
    }
};

// 4 ms is developed code

 // optimsed code  = 0 ms

 class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "*") {
                int t1 = s.top();
                s.pop();
                int t2 = s.top();
                s.pop();
                s.push(t1 * t2);
            } else if (tokens[i] == "/") {
                int t1 = s.top();
                s.pop();
                int t2 = s.top();
                s.pop();
                s.push(t2 / t1);
            } else if (tokens[i] == "+") {
                int t1 = s.top();
                s.pop();
                int t2 = s.top();
                s.pop();
                s.push(t1 + t2);
            } else if (tokens[i] == "-") {
                int t1 = s.top();
                s.pop();
                int t2 = s.top();
                s.pop();
                s.push(t2 - t1);
            } else {
                int temp = stoi(tokens[i]);
                s.push(temp);
            }
        }
        return s.top();
    }
};