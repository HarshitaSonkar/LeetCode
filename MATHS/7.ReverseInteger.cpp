class Solution {
public:
    int reverse(int x) {
    
    long long output=0;
      
      while(x){
      output=10*output + x%10;
      x=x/10;

        if(output > INT_MAX|| output < INT_MIN){
       
           output=0;
        }
      }
    return output;
  }
        
};
