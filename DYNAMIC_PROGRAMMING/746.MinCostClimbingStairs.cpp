class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int i,j;
        int n = cost.size();
        int x=0,y=0,x1;
        for(i=0; i<n; i++){
            x1 = cost[i] + min(x,y);
            
            y = x;
            x = x1;
        }
        return min(x,y);
    }
};
