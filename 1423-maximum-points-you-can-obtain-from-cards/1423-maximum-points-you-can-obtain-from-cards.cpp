class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total = 0;
        for (int i = 0; i < k; i++) {
            total += cardPoints[i];
        }
        int maxPoints = total;
        for (int i = 1; i <= k; i++) {
            total -= cardPoints[k - i];
            total += cardPoints[cardPoints.size() - i];
            maxPoints = max(total, maxPoints);
        }
        return maxPoints;
    }
};