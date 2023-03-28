

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string res = "";

        int l = s.size(), i=0;

        while(i<l){
            if(st.empty() || st.top() != s[i]){
                st.push(s[i]);
            }
            else st.pop();
            i++;

        }

        while(!st.empty()){
            char element = st.top();
            st.pop();

            res += element;

        }
        reverse(res.begin(), res.end());

        return res;

    }
};