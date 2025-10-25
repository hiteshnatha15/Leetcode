class Solution {
public:
    double helper(double x, int n) {
        if (n == 0)
            return 1.0;
        if (n < 0) {
            if (n == INT_MIN) {
                return 1.0 / (x * helper(x, -(n + 1)));
            }
            return 1.0 / (helper(x, -n));
        }
        double half = helper(x, n / 2);
        return n % 2 == 0 ? half * half : half * half * x;
    }
    double myPow(double x, int n) { return helper(x, n); }
};