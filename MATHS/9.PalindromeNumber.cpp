class Solution {
public:
    bool isPalindrome(int x) {
        long sum=0;
        int num=x;
        long rem;
        if(x<0){
            return false;
        }
        else
            while(num>0){
                rem=num%10;
                sum=sum*10+rem;
                num=num/10;
            }
            return x==sum;
    }
};
