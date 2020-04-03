class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        int n=index.size();
        vector<int>vect;
        
        int i,j,num;
        
        for(i=0;i<n;i++){
            
           j=index[i];
           num=nums[i];
            
            vect.insert(vect.begin()+j , num);
         }
        return vect;
    }
};
