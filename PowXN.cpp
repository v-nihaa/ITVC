class Solution {
public:
    double myPow(double x, long long n) {
        // If exponent is zero
        if (n == 0) return 1.0;
        
        // If power is negative
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        
        double result = 1.0;
        
        while (n > 0) {
            if (n % 2 == 1) {
                result *= x;
            }
            x *= x;
            n /= 2;
        }
        
        return result;
    }
};
