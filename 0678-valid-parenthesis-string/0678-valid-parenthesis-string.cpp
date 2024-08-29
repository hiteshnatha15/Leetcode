class Solution {
public:
    bool checkValidString(string s) {
        int maxi = 0;
        int mini = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                maxi++;
                mini++;
            } else if (s[i] == ')') {
                mini--;
                maxi--;
            } else {
                mini--;
                maxi++;
            }
            if (mini < 0)
                mini = 0;
            if (maxi < 0)
                return false;
        }
        return mini == 0;
    }
};