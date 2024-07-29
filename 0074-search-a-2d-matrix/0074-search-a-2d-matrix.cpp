class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix[0].size() - 1;
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[i][0] <= target &&
                target <= matrix[i][matrix[0].size() - 1]) {
                while (low <= high) {
                    int mid = (low + high) / 2;
                    if (matrix[i][mid] == target)
                        return true;
                    else if (matrix[i][mid] < target) {
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
            }
        }
        return false;
    }
};