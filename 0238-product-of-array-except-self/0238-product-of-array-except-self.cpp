class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int prod = 1;
        int check = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i]!=0)
            prod = prod * nums[i];
            else
            check++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i]==0 && check==1)
                ans.push_back(prod);
            else if(check==0)
                ans.push_back(prod/nums[i]);
            else
                ans.push_back(0);
        }
        return ans;
    }
};