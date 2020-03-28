class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int count1=0;
        int count2=0;
        int count3=0;
        
        for(auto i: nums){
            if(i==0)
                count1++;
            else if(i==1)
                count2++;
            else 
                count3++;
        }
        nums.clear();
        for(int i=0;i<count1;i++){
            nums.push_back(0);
        }
        for(int j=0;j<count2;j++){
            nums.push_back(1);
        }
        for(int k=0;k<count3;k++){
            nums.push_back(2);
        }
        
    }
};
