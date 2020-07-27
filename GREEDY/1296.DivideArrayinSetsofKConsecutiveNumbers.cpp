class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        
        int n = nums.size();
		if (n % k != 0) 
            return false;
		int ssize = n/k;

		map<int, int>mp;
		for (int i = 0; i < n; i++)
			mp[nums[i]]++;

		for (auto it = mp.begin(); it != mp.end(); it++) {
			if (mp[it -> first] > 0) {
				for (int i = k-1; i >= 0; i--) {
					mp[it -> first + i] -= mp[it -> first];
					if (mp[it -> first + i] < 0)
						return false;
				}
			}
		}

		return true;
        
    }
};
