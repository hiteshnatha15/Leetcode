class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int temp = x;
        if (x < 0)
            return false;
        while (temp) {
            if(rev>INT_MAX/10)
                return false;
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        return x == rev;
    }
};