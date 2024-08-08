class RandomizedSet {
public:
    unordered_map<int, int> valueToIndex;
    vector<int> values;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
          if(valueToIndex.find(val) != valueToIndex.end()) return false;
          values.push_back(val);
          valueToIndex[val] = values.size()-1;
          return true;
    }
    
    bool remove(int val) {
        if(valueToIndex.find(val) == valueToIndex.end()) return false;
        int last = values.back();
        int indextoReplace = valueToIndex[val];
        values[indextoReplace] = last;
        valueToIndex[last] = indextoReplace;
        values.pop_back();
        valueToIndex.erase(val);
        return true;
    }
    
    int getRandom() {
        int randomIndex = rand() % values.size();
        return values[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */