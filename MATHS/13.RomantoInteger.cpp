int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 


class Solution {
public:
    int romanToInt(string s) {
        
        int iter=0;
        
        for(int i=0;i<s.length();i++){
            
            int s1 = value(s[i]); 
              if(i+1<s.length()){
                 int s2=value(s[i+1]);
                   if(s2<=s1){
                       iter=iter+s1;
                   }else{
                       iter=iter+s2-s1;
                       i++;
                   }
              }else{
                  iter=iter+s1;
              }
        }
     return iter;   
    }
};
