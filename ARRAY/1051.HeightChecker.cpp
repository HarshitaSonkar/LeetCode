class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int n = heights.size();
        vector<int>vect;
         vect=heights;
        
        int count = 0;
        
        sort(heights.begin(), heights.end());
        for(int i=0; i<n; i++)
        {
            if(heights[i] != vect[i])
                count++;
        }
        
        return count;
        
    }
};
