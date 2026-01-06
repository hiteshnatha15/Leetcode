class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int lMax = 0;
        int rMax = 0;
        int ans = 0;

        while (l <= r) {
            if (height[l] <= height[r]) {
                if (lMax <= height[l])
                    lMax = height[l];
                else
                    ans += lMax - height[l];
                l++;
            } else {
                if (height[r] >= rMax)
                    rMax = height[r];
                else
                    ans += rMax - height[r];
                r--;
            }
        }
        return ans;
    }
};