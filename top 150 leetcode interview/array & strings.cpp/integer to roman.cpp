class Solution {
public:
    string intToRoman(int num) {
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50,40, 10, 9, 5, 4, 1 };
        vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    string res="";
    for (int i=0; i<values.size(); i++){
        while(num>=values[i]){
            num -= values[i];
            res += symbols[i];
        }

    }
    return res;
    }
};

// my code 7ms

// optimised code  - 0ms

class Solution {
public:
    string intToRoman(int num) {
        string strs[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int nums[]={1000,900,500,400,100,90,50,40,10,9,5,4,1},i=0;
        string res="";
        while(num>0)
        {
            if(num-nums[i]>=0)
            {
                res+=strs[i];
                num-=nums[i];
            }
            else{
                i++;
            }
        }
        return res;
    }
};