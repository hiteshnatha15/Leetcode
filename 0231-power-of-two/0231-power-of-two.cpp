class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x = n;
        while (n > 0) {
            if (x == 1)
                return true;
            if (x % 2 != 0)
                break;
            x /= 2;
        }
        return false;
    }
};