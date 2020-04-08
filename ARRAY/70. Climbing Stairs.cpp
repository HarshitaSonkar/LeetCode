class Solution {
public:
    int climbStairs(int n) {
        
     vector<int>vect;
        vect.push_back(0);
        vect.push_back(1);
        vect.push_back(2);
        
        for(int i=3;i<=n;i++){
            vect.push_back(vect[i-1]+vect[i-2]);
        }
        return vect[n];
    
        
    /*  TIME LIMIT EXCEEDED 
     if(n<=0)
            return 0;
       else if(n==1)
            return 1;
      else  if(n==2)
            return 2;
      else return climbStairs(n-1)+climbStairs(n-2);    */
    }
};
