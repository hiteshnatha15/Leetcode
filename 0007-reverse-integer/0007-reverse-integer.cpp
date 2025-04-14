class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        int reversed = 0;
        while (x) {
            if (reversed > INT_MAX / 10 ||
                (reversed == INT_MAX / 10 && x % 10 > 7))
                return 0;
            if (reversed < INT_MIN / 10 ||
                (reversed == INT_MIN / 10 && x % 10 < -8))
                return 0;
            reversed = (ans * 10) + x % 10;
            ans = reversed;
            x /= 10;
        }
        return ans;
    }
};