class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
     
       if (r*c != nums[0].size()*nums.size())
	   {
		     return nums;
		 }

		vector<int>vect;
		vector<vector<int>>res;

		for (int n = 0; n < nums.size(); n++)
		{
			for (int m = 0; m < nums[0].size(); m++)
			{
				vect.push_back(nums[n][m]);
                if (vect.size() == c)
                {
                    res.push_back(vect);
                    vect.clear();
                }
			}
		}
		return res;
    }
};
