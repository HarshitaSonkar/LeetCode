class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     
        unordered_set<int> s;
        for (auto num : nums){ 
            if (!s.count(num)){   // if 'num' is not present in set 's' then insert in set s
                s.insert(num); 
            }else{
                 return num;
              }
        }
        return -1;
        }
    };
        
  // count give no. of occurences of an element in a given range      
        
        /*
        int n=nums.size()-1;
        int sum1=(n*(n+1))/2;
        int sum2=accumulate(nums.begin(),nums.end(),0);
        int diff;
        diff=sum2-sum1;
        return diff;
    }
};

 for ( int i = 0; i < nums.size(); i++ ) {
            int index = abs(nums[i]);
            if ( nums[index] > 0 ) {
                nums[index] = -nums[index];
            } else return index;
        }
     */
