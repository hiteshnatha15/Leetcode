class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int ans = 0;
        int low=1;
        int high=maxi;

        while(low<=high){
            int mid=(low+high)/2;
            long long hours = 0;
            for (int j = 0; j < piles.size(); j++) {
                hours = hours + ceil((double)(piles[j]) / (double)(mid));
            }
            if (hours <= h)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};