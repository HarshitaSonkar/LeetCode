class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
       if(intervals.size() == 0) 
           return {};
        vector<vector<int>> res;
        
        sort(intervals.begin(), intervals.end(), myComp);
        
        res.push_back(intervals[0]);
        
        for(int i=1; i<intervals.size(); i++)
        {
            while(i<intervals.size() && res.back()[1] >= intervals[i][0])
            {
                res.back()[1] = max(res.back()[1], intervals[i][1]);
                i++;
            }
            
            if(i == intervals.size()) 
                break;
            res.push_back(intervals[i]);
        }
        return res;
    }
    
    static bool myComp(vector<int>& a, vector<int>& b)
    {
        return (a[0] < b[0]);
    }
};
