class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0) return 0;
        if(n == 0 || x == 1) return 1;

        long long N = n;
        if(N < 0) {
            N*= -1;
            x = 1 / x;
        }

        double ans = 1;

        while(N > 0) {
            if(N % 2 == 1) {
                ans*= x;
            }

            x*= x;
            N/= 2;
        }

        return ans;
    }
};