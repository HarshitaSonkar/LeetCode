class Solution {
public:
        /*         x^n = x^(n/2) * x^(n/2) // for n even
	               x^n = x * x^((n-1)/2) * x^((n-1)/2) // for n odd
        */
        
    double sol(double x, long long n){
        if(n==0) return 1.0;
        if(n==1) return (double)x;
        if(n%2==1){ 
            double t = sol(x,(n-1)/2);   // odd
            return x*t*t;
        }
        else { 
            double t = sol(x,n/2);      // even
            return t*t;
        }
    }
    double myPow(double x, int n) {
        if(x==0.0) return 0.0;
        if(x==1.0) return 1;
        if(n<0)
            return 1.0/sol(x,-(long long)n);
        else return sol(x,n);
    }
};
