class Solution {
public:
    int countPrimes(int n) {
        
    vector<int> primes(n, 0); 

    int i=2; 
    int count = 0;

        while(i<n) {            

            if(primes[i]==0) 
                 count++;
            for(int j=i*2; j<n; j+=i){     
                  if(primes[j]==1) 
                       continue;            
                       primes[j] = 1;
            }
          i++;            
        }
   
        return count;
     }
};
