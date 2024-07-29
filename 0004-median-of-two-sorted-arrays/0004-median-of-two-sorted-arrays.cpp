class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++) {
            res.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            res.push_back(nums2[i]);
        }
        sort(res.begin(),res.end());
        int n=res.size();
        if(n%2==0)
            return (res[n/2-1]+res[(n)/2])/2.0;
        return double(res[(n)/2]);
    }
};