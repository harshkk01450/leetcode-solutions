class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        if(x < 4) return 1;

        int start = 0;
        int end = x;

        while(start <= end) {
            long long mid = end + (start - end) / 2;

            if(mid * mid == x) {
                return mid;
            } else if(mid * mid > x) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return end;
    }
};