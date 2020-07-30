class Solution {
public:
    vector<string> letterCombinations(string digits) {
        

        if(digits.size() == 0) 
            return {};
        vector<string> res;
        vector<string> ans = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(res, ans, "", 0, digits);
        return res;
    }
    
    void solve(vector<string>& res, vector<string> ans, string curr, int pos, string digits)
    {
        if(curr.size() == digits.size())
        {
            res.emplace_back(curr); 
            return;
        }
        
        for(int i = pos; i < digits.size(); i++)
        {
            string str = ans[digits[i]-'2']; //  ans = {"","", "abc", "def", "ghi", "jkl", "mno","pqrs", "tuv", "wxyz"} then ans[digits[i] - '0']
            for(char ch : str)
            {
                curr.push_back(ch);
                solve(res, ans, curr, i+1, digits);
                curr.pop_back();
            }
        }
        return;    
    }
};



// digits[i]-'0'
// It converts an int in char form into an actual int . For example, if s[i] is '9' then s[i] - '0' will produce 9 
