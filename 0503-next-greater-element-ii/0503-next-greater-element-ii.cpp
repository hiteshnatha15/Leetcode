class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int maxi=nums[i];
            for(int j=i+1;j<i+nums.size();j++){
                int index=j%nums.size();
                if(nums[i]<nums[index]){
                    maxi=nums[index];
                    break;
                }
            }
            if(maxi==nums[i])
                ans.push_back(-1);
            else
                ans.push_back(maxi);
        }
        return ans;
    }
};