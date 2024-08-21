class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size(), m = magazine.size();
        if(m<n) return 0;
        map<char, int> res;
        for(int i=0;i<m;i++){
            res[magazine[i]]++;
        }
        for(auto i:ransomNote){
            if(res.find(i) != res.end() && res[i]>0) {
                res[i]--;
            }
            else {
               return 0;
            }
        }
        return 1;
    }
};
// my code  - 16ms

// / optimum code  - 0ms

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int letters[26];
        bool ans = true;

        fill(letters, letters + 26, 0);

        for(int i = 0; i < magazine.size(); i++){
            ++letters[(magazine[i] - 97)];
        }
        cout << "filled array with magazine" << endl;

        for (int i = 0; i < ransomNote.size(); i++){
            if (letters[(ransomNote[i] - 97)] == 0){
            ans = false;
            break;
            }

            --letters[(ransomNote[i] - 97)];
        }
        return ans;
        
    }
};
