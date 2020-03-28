class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
       
        int res = 0;
        vector<int> count(121, 0);
        for(int a : ages) 
            count[a]++;

        for(int a : ages) {
            for(int i=1; i<=120; i++) {
                if(count[i]==0)
                    continue;
                if(!(i <= 0.5*a+7 || i>a || (i>100 && a<100))) {
                    res += count[i];
                    if(i==a){
                        res--;
                    }
                }
            }
        }
        return res;
    }
};
        
        
        
        
        
        
        
    /*    
        int count=0;
        for(int i=0;i<ages.size()-1;i++){
            if(!(ages[i+1]<= 0.5*ages[i]+7) || ages[i+1] > ages[i] || ages[i+1] > 100 && ages[i] < 100){
               count++;
        }
        return count;
    }
};
vector<int> count(121, 0);
        for(int a : ages) count[a]++;
        int res = 0;
        for(int a : ages) {
            for(int i=1; i<=120; i++) {
                if(count[i]==0) continue;
                if(!(i <= 0.5*a+7 || i>a || (i>100 && a<100))) {
                    res += count[i];
                    if(i==a) res--;
                }
            }
        }
        return res;
        */
