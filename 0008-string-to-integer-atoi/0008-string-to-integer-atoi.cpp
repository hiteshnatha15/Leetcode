class Solution {
private:
    int helper(string& s, int sign, long long num, int i) {
        if (i >= s.size() || !isdigit(s[i]))
            return (int)num * sign;

        num = num * 10 + (s[i] - '0');
        if (num * sign <= INT_MIN)
            return INT_MIN;
        if (num * sign >= INT_MAX)
            return INT_MAX;
        return helper(s, sign, num, i + 1);
    }

public:
    int myAtoi(string s) {
        int sign = 1;
        int i = 0;
        while (i < s.size() && s[i] == ' ')
            i++;
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '+') ? 1 : -1;
            i++;
        }
        return helper(s, sign, 0, i);
    }
};