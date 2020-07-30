class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int>stk;
        int n = tokens.size();
        
        for(int i = 0; i < n; i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int b = stk.top();
                stk.pop();
                int a = stk.top();
                stk.pop();
                if (tokens[i] == "+")
                    stk.push(a+b);
                else if (tokens[i] == "-")
                    stk.push(a-b);
                else if (tokens[i] == "*")
                    stk.push(a*b);
                else if (tokens[i] == "/")
                    stk.push(a/b);
            } else {
                int val = stoi(tokens[i]);
                stk.push(val);
            }
        }
        
        return stk.top();
        
    }
};
