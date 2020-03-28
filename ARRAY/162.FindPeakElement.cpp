class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        return distance(nums.begin(), max_element(nums.begin(), nums.end()));
        
     
        
    }
};


 /*  vector<int>vect;
        set<int>ans(nums.begin(),nums.end());
        set<int>::iterator i;
        for(i=ans.begin();i!=ans.end();i++){
            vect.push_back(*i);
        }
        int j;
        int max=0;
        int m;
        for(j=0;j<vect.size()-1;j++){
            if(vect[j]>max){
                max=vect[j];
                m=j;
            }
        }
        return m;
     */
