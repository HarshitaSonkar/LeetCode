class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
       int i=0;
       int n=bits.size()-1;
        while(i<=n){
            if(bits[i]==0 && i==n){
                return true;
            }
             if(bits[i]==0 && i!=n){
                i++;
            }
             if(bits[i]==1){
                i=i+2;
            }
           
        }
       return false; 
    }
};
