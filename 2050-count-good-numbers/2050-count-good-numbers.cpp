class Solution {
public:
    int MOD = 1e9 + 7;

    long long helper(long long base, long long expo) {
        long long ans = 1;
        while (expo > 0) {
            if (expo % 2)
                ans = (ans * base) % MOD;
            base = (base * base) % MOD;
            expo /= 2;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        return (int)((helper(5, even) * helper(4, odd)) % MOD);
    }
};
