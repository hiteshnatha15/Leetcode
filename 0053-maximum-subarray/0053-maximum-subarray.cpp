class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs=INT_MIN;
        int temp=0;
        for(int i=0;i<nums.size();i++){
            temp=temp+nums[i];
            maxs=max(temp,maxs);
            if(temp<0)
            temp=0;
        }
        return maxs;
    }
};