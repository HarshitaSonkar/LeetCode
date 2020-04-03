class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       
        unordered_map<int, int> x;
        for (auto y : arr){
             x[y]++;
        }
        for (auto y : x){
            if (y.second > arr.size()/4) 
                return y.first;
        }
        return -1;
    }
};
