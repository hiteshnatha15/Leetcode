class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int days = 0;
        if((m*1ll*k)>bloomDay.size()) return -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int cnt = 0;
            int booke = 0;
            for (int j = 0; j < bloomDay.size(); j++) {
                if (bloomDay[j] <= mid) {
                    cnt++;
                } else {
                    booke = booke + (cnt / k);
                    cnt = 0;
                }
            }
            booke = booke + (cnt / k);
            if (m <= booke) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};