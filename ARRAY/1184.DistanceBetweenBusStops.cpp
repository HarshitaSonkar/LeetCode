class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        if ( destination < start) {
            swap(start, destination);
        }
        auto route = accumulate(distance.begin() + start, distance.begin() +  destination, 0),
             total = accumulate(distance.begin(), distance.end(), 0);
        return min(route, total - route);
        
    }
};
