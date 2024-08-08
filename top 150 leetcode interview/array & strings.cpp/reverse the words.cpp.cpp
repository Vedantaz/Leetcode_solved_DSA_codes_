class Solution {
public:
std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

// Function to split the string by spaces
    vector<string> split(const string& str) {
        std::vector<std::string> result;
        std::istringstream iss(str);
        for (std::string word; iss >> word; ) {
            result.push_back(word);
        }
        return result;
    }
    string reverseWords(string s) {
        s = trim(s);
    
    // Split the string into words
    std::vector<std::string> words = split(s);
    
    // Reverse the words
    std::reverse(words.begin(), words.end());
    
    // Join the words with a single space
    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i != 0) {
            result += " ";
        }
        result += words[i];
    }
    
    return result;
    }
};