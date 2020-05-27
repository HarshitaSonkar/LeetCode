class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        /**
         * f(n) = (f(0))f(n-1) + (f(1))f(n-2) + ... + 
         *    (f(n-2))f(1) + (f(n-1))f(0)
         **/
        vector<vector<string>> result={{""}};
        for(int i=1; i<=n; i++){
            vector<string> list;
            for(int j=0; j<i; j++){
                for(string first : result[j]){
                    for(string second : result[i-1-j]){
                        list.push_back("("+first+")"+second);
                    }
                }
            }
            result.push_back(list);
        }
        return result[result.size()-1];
    }
};
