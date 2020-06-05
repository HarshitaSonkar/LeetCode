class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        priority_queue<pair<float,float>, vector<pair<float,float>>, greater<pair<float,float>> > pq;
        for(int i=0; i<points.size(); i++){
            float z = sqrt(points[i][0] * points[i][0] + points[i][1] * points[i][1]);
            pq.push(make_pair(z,i));
        }
        vector<vector<int>> vect;
        while(K--){
            pair<float,int> p = pq.top();
            pq.pop();
            vect.push_back(points[p.second]);
        }
        return vect;
    }
};
