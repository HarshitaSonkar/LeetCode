class Solution {
public:
    bool isPowerOfThree(int n) {
        
    while(n > 1)
        {
            if(n%3 != 0)
                return false;
            n = n/3;
        }
        return (n == 1);
    }
};

        
        
       
/*bool isPowerOfThree(int n) 
{
  double logRes = log10(n)/log10(3);
  return (logRes - int(logRes) == 0) ? true : false; 
}
*/
        
/*The code implements the base change rule of the logarithm. it basically looks at if base3 logarithm of the number is an integer or not. */
