class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int, int> mp;
        mp[5] = 0;
        mp[10] = 0;
        mp[20] = 0;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5)
                mp[5]++;
            if (bills[i] == 10) {
                if (mp[5] == 0)
                    return false;
                else {
                    mp[10]++;
                    mp[5]--;
                }
            }
            if (bills[i] == 20) {
                if (mp[10] != 0 && mp[5] != 0) {
                    mp[20]++;
                    mp[5]--;
                    mp[10]--;
                    continue;
                } else if (mp[5] >= 3) {
                    mp[20]++;
                    mp[5] -= 3;
                    continue;
                } else
                    return false;
            }
        }
        return true;
    }
};