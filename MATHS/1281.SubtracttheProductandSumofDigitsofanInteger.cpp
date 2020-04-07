class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem;
        int sum=0;
        int prod=1;
        int res;
        while(n>0){
            rem=n%10;
            prod=prod*rem;
            sum=sum+rem;
            n=n/10;
        }
       res=prod-sum;
        return res;
    }
};
