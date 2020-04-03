class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int n=0;
        int m;
    
        for(int num:nums){
             int k=0;
           while(num){
           
               num=num/10;
                k++;
               }
            if(k%2 ==0)
                n++;
          }
        return n;  
    }
};
