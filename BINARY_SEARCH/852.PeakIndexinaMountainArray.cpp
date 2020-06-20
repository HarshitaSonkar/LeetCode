class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int pos = distance(A.begin(), max_element(A.begin(), A.end()));
        return pos;
    }
};
