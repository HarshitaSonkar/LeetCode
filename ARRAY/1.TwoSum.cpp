class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::unordered_map<int, int> s;
        for(int i=0; i < nums.size(); i++)
        {
            int res = target - nums[i];
            auto it = s.find(res);
            if(it != s.end()) return vector<int>{it->second, i};
            s[ nums[i] ] = i;
        }
        
        return vector<int>();
    }
}; 
/*class Solution {
public:
  
    std:: unordered_map<int,int>s;
        std:: unordered_map::iterator it;
    vector<int> twoSum(vector<int>& nums, int target) {
        
      //  int i=nums.size();
       
        for(int i=0;i<nums.size();i++){ 
           int req=target-nums[i];
             //cout<<i<<i+1;
             it=s.find(req);
            if(it != nums.end())
             return vector<int>{it->second, i};
            s[ nums[i] ] = i;
        
          //  return vector<int>{i,i+1};
            }
        
        
    return vector<int>{0,0};
        
    }
}; */

/* #include <unordered_map> 
class Solution {
public:
    std::unordered_map<int,int> s;
    std::unordered_map<int,int>::iterator it;
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result; 
        for(int i=0;i<nums.size();i++) { 
            it=s.find(target-nums[i]); 
            if(it!=s.end()) {
                result.push_back(i); 
                result.push_back(s[target-nums[i]]); 
                break; 
            } else {
                s[nums[i]]=i;
            }
            
        }
        
       return result;  
    }
} */
