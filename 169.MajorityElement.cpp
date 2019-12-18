class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> c;
        for(int n:nums){
            c[n]++;
            if(c[n]>nums.size()/2){
              return n;
            }
        }
        return 0;
    }
};
