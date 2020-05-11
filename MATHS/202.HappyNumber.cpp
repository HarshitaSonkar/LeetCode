class Solution {
public:
    bool isHappy(int n) {
   
    int x = 0;
    unordered_map<int,int> m;
    while(n != 1)
    {
        m[n]++;
        if(m[n] > 1)
        {
            return false;
        }
        while(n)
        {
            x += (n%10)*(n%10);
            n = n/10;
        }

        n = x;
        x = 0;
    }

    
    return true;
    }
};
        
    
/* 
 auto sumSq = [](int n, int r = 0) { for (; n > 0; n /= 10) r += (n % 10) * (n % 10); 
                                           return r; };
  int tort = sumSq(n), hare = sumSq(sumSq(n));
  while (tort != hare) tort = sumSq(tort), hare = sumSq(sumSq(hare));
  return tort == 1;
    }
};

class Solution {
public:
    bool isHappy(int n) {
        set<int> sumTemp;
        while (n != 1) {
            int sum = 0;
            int temp;
            while (n) {
                temp = n % 10;
                sum += temp * temp;
                n /= 10;
            }
            n = sum;
            
            // another solution: detect the size of set.
            // int t = sumTemp.size(); 
            // sumTemp.insert(n);  
            // if(sumTemp.size()==t){  
            //    return false; 
            // }
            
            if(sumTemp.find(n)==sumTemp.end()){
                sumTemp.insert(n);
            }
            else {
                return false;
            }
        }
        return true;
    }
};  */
