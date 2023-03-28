class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string s = to_string(k);

        vector<int> res;
        int carry = 0, l1 = num.size()-1, l2 = s.size()-1;
        while(l1>=0 || l2>=0){
            int sum = carry;
            if(l1>=0){
                sum = sum + num[l1--];

            }
            if(l2>=0){
                sum = sum + s[l2--]-'0';

            }
            res.push_back(sum%10);
            carry = sum/10;
 
        }
        if(carry > 0){
            res.push_back(carry);
        }
        reverse(res.begin(), res.end());
        return res;

    }
};