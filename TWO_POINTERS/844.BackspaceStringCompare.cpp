class Solution {
public:
    bool backspaceCompare(string S, string T) {
        vector<char>stk1;
        vector<char>stk2;
        for(int i=0;i<S.size();i++){
            if(S[i]!='#'){
            stk1.push_back(S[i]);
            }
            if(S[i]=='#' && stk1.size()>0){
                stk1.pop_back();
            }
            }
        for(int j=0;j<T.size();j++){
            if(T[j]!='#'){
            stk2.push_back(T[j]);
            }
            if(T[j]=='#' && stk2.size()>0){
                stk2.pop_back();
            }
        }
    
    return stk1==stk2;
    }
  };
