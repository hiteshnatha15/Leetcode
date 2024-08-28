class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b) { return a[1] < b[1]; }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compare);
        int cnt = 1;
        int endTime = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (endTime <= intervals[i][0]) {
                cnt++;
                endTime = intervals[i][1];
            }
        }
        return intervals.size() - cnt;
    }
};