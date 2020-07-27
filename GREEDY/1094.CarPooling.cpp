class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        int trip_len = 1001;
        //int trip_len = trips.size();
		vector<int>stops(trip_len, 0);

		for (int i = 0; i < trips.size(); i++) {
			stops[trips[i][1]] += trips[i][0];
			stops[trips[i][2]] -= trips[i][0];
		}

		for (int i = 0; i < trip_len; i++) {
			if (i != 0) stops[i] += stops[i-1];
			if (stops[i] > capacity)
				return false;
		}

       return true;
    }
};
