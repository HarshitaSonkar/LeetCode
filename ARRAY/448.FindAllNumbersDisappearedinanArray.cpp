class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        /*
        vector<int>vect;
        vector<int>result;
        set<int>snums(nums.begin(),nums.end());
        set<int>::iterator i;
        for(i=snums.begin();i!=snums.end();i++){
            
           vect.push_back(*i);
        }
        for(int j=0;j<vect.size();j++){
            if(vect[j]==j+1){
                break;
            }else
                result.push_back(j);
        }
        return result;
        */
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i+1 == nums[i]) 
                continue;
            int k = nums[i]-1;
            while( k+1 != nums[k])
            {
                int j = nums[k];
                nums[k] = k+1;
                k = j-1;
            }
        }
       
        for(int i = 0; i < nums.size(); i++) {
            if(i+1 != nums[i]){
                ans.push_back(i+1);
            }
        }
        
        return ans;
        
    }
};
