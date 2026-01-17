class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int idx1 = (nums1.size() + nums2.size()) / 2;
        int idx2 = idx1 - 1;
        int ele1 = 0;
        int ele2 = 0;
        int cnt = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                if (cnt == idx1)
                    ele1 = nums1[i];
                if (cnt == idx2)
                    ele2 = nums1[i];
                i++;
            } else {
                if (cnt == idx1)
                    ele1 = nums2[j];
                if (cnt == idx2)
                    ele2 = nums2[j];
                j++;
            }
            cnt++;
        }
        while (i < nums1.size()) {
            if (cnt == idx1)
                ele1 = nums1[i];
            if (cnt == idx2)
                ele2 = nums1[i];
            i++;
            cnt++;
        }
        while (j < nums2.size()) {
            if (cnt == idx1)
                ele1 = nums2[j];
            if (cnt == idx2)
                ele2 = nums2[j];
            j++;
            cnt++;
        }

        if ((nums1.size() + nums2.size()) % 2 != 0)
            return (double)ele1;
        return (double)(ele1 + ele2) / 2.0;
    }
};