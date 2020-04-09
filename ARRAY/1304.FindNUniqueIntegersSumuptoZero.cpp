class Solution {
public:
    vector<int> sumZero(int n) {
   int x=n-1;
       // for(int i=1;i<n-1;i++){
          int sum=(x*(x+1))/2;
            int num=-sum;
        vector<int>res;
        res.push_back(num);
        for(int i=1;i<=x;i++){
            res.push_back(i);
        }
        return res;
        
    }
};
