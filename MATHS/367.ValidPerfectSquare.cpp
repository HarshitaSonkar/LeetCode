class Solution {
public:
    bool isPerfectSquare(int num) {
        
       int s = sqrt(num);
        if(pow(s,2) == num)
            return true;
        return false;
    }
};
 
