class Solution {
public:
    bool wordPattern(string p, string s) {
        
        vector<string> words;
        string w;
        istringstream iss(s);
        while( iss >> w){
            words.push_back(w);
        }

        unordered_map<char, string> chartoWord;
        unordered_map<string, char> wordtoChar;

        if(p.size() != words.size()) return 0;
         
        for(int i=0;i<p.size();i++){
            char c = p[i];
            string word = words[i];


            if(chartoWord.count(c)>0 && chartoWord[c] != word || 
            wordtoChar.count(word)>0 && wordtoChar[word] != c ){
                return 0;
            }
            
            chartoWord[c] = word;
            wordtoChar[word] = c;
        }
        return 1;
    }
};

// this is solved and most optimal code - 0ms