class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;
        
        for(string word : strs)
        {
            string keyString = word;
            sort(keyString.begin(), keyString.end());
            mp[keyString].push_back(word);
        }
        
        for(const auto& i : mp)
        {
            vector<string> temp;
            for(string j : i.second)
                temp.push_back(j);
            res.push_back(temp);
        }
        return res;
        
    }
};
