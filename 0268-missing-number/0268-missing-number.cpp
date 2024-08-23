class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int xorr1 = 0;
    int xorr2 = 0;
    for (int i = 0; i < nums.size(); i++) {
        xorr1 = xorr1 ^ nums[i];
        xorr2 = xorr2 ^ (i + 1);
    }
    return xorr1 ^ xorr2;
}
};