class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);

        while(start<=end) {
            int mid=(start+end)/2;
            int d = 1;
            long long sum = 0;
            for (int j = 0; j < weights.size(); j++) {
                if (sum + weights[j] <= mid) {
                    sum = sum + weights[j];
                } else {
                    sum = weights[j];
                    d++;
                }
            }
            if (d <= days) 
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
    }
};