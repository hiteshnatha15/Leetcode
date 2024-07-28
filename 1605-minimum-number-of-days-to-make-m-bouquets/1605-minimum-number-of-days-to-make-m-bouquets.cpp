class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        if ((m * 1ll * k) > bloomDay.size())
            return -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int cnt = 0;
            int booke = 0;
            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid) {
                    cnt++;
                } else {
                    booke += cnt / k;
                    cnt = 0;
                }
            }
            booke += cnt / k;
            if (booke >= m) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};