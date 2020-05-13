class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        
        int x1 = points[0][0], y1 = points[0][1];
        int x2 = points[1][0], y2 = points[1][1];
        int x3 = points[2][0], y3 = points[2][1];
        
        double slopeAB = (x1 - x2 == 0 ? 0 : (y2 - y1)/((x2 - x1)*1.0));
        double slopeBC = (x3 - x2 == 0 ? 0 : (y3 - y2)/((x3 - x2)*1.0));
        double slopeAC = (x3 - x1 == 0 ? 0 : (y3 - y1)/((x3 - x1)*1.0));
    
        return
           !( slopeAB == slopeBC && slopeBC == slopeAC) &&  
           !( x1 == x2 && y1 == y2) &&                      
           !( x1 == x3 && y1 == y3) &&
           !( x2 == x3 && y2 == y3);
    }
};
