class Solution {
public:
    int maxProfit(vector<int>& prices) {
  
        
        if (prices.size()==0 || prices.size()==1)
            return 0;
        
        int len=prices.size();
        int result=0;
        int maximum=prices[len-1];
        for(int i=len-1;i>=0;i--){
            if(prices[i]>maximum)
                maximum=prices[i];
            result=max(result,maximum-prices[i]);
        }
        return result;    
    }
};
       
