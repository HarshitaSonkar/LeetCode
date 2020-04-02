class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        
        int countOdd=0;
		int countEven=0;
		for(auto& x:chips){
			if(x%2==0){
				countEven++;
			}
			else{
				countOdd++;
			}
		}
		if(countOdd==0 || countEven==0){
			return 0;
		}
		return min(countOdd,countEven);
        
    }
};
