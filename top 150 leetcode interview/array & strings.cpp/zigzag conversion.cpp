class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.size() <= numRows) return s;

        vector<string> rows(min(numRows, int(s.size())));
        int curRow=0;
        bool goingdown=false;

        for(char c:s){
            rows[curRow] +=c;
            if(curRow == 0 || curRow == numRows-1)goingdown = !goingdown;
            curRow += goingdown ?1:-1;

        }
        string res="";
        for(const string &row:rows){
            res += row;
        }
        return res;
    }
};

// complex problem