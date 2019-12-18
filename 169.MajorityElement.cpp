//SOLUTION 1
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



// SOLUTION 2

class Solution {
public:
    int majorityElement(vector<int>& nums) {
  
        sort(nums.begin(),nums.end());
            return nums[nums.size()/2];
      
    }
};
        
  
