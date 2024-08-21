class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string token;

        while (getline(ss, token, '/')){
            if (token == "" || token == ".") {
                continue;
            } else if (token == "..") {
                if (!st.empty()) {
                    st.pop();   
                }
            } else {
                st.push(token);
            }
        }
        string res;
        while (!st.empty()) {
            res = "/" + st.top() + res;
            st.pop();
        }
        return res.empty() ? "/" : res;
    }
};

// 4ms complexity