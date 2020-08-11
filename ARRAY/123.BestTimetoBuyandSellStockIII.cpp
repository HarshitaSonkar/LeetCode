class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy1 = INT_MIN, sell1 = 0, buy2 = INT_MIN, sell2 = 0;
        
        for(auto i : prices){
            buy1 = max(buy1, -i);
            sell1 = max(sell1, buy1 + i);
            buy2 = max(buy2, sell1 - i);
            sell2 = max(sell2, buy2 + i);
        }
        return sell2;
    }
};







/*Throughout the trading day, our balance changes as follows:

Drops after we buy stock first time (- i1)
Rises after we sell it (+ i2)
Dips after we buy stock second time (- i3)
Hikes after we sell it (+ i4)          */
