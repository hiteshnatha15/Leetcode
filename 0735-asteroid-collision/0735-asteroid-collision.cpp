class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for (int i = 0; i < asteroids.size(); i++) {
            int cur = asteroids[i];
            while (!ans.empty() && ans.back() > 0 && cur < 0) {
                if (ans.back() < -cur) {
                    ans.pop_back();
                    continue;
                } else if (ans.back() == -cur) {
                    ans.pop_back();
                }
                cur = 0;
            }
            if (cur != 0)
                ans.push_back(cur);
        }
        return ans;
    }
};