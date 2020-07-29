class RandomizedSet {
public:
    unordered_map<int, int>mp;
    vector<int> value;
    
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        
        if(mp.find(val) != mp.end())
            return false;
        
        int index = value.size();
        
        mp[val] = index;
        
        value.push_back(val);
        
        return true;
        
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        
        auto i = mp.find(val);
        if(i == mp.end())
            return false;
        
        int index = i->second;
        int lastIdx = value.size() - 1;

        if (index != lastIdx) {
            value[index] = value.back();
            mp[value.back()] = index;
        }

        value.pop_back();
        mp.erase(i);

        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return value[rand() % value.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
