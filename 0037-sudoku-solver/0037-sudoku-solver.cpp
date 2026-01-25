class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0, 0);
        return;
    }
    bool helper(vector<vector<char>>& board, int row, int col) {
        if (row == 9)
            return true;
        if (col == 9)
            return helper(board, row + 1, 0);
        if (board[row][col] != '.')
            return helper(board, row, col + 1);
        for (int i = 1; i <= 9; i++) {
            if (isSafe(board, row, col, i)) {
                board[row][col] = '0' + i;
                bool res = helper(board, row, col + 1);
                if (res)
                    return true;
                board[row][col] = '.';
            }
        }
        return false;
    }
    bool isSafe(vector<vector<char>>& board, int row, int col, int num) {
        for (int i = 0; i < board.size(); i++) {
            if (board[i][col] == '0' + num || board[row][i] == '0' + num)
                return false;
        }
        int x = (row / 3) * 3;
        int y = (col / 3) * 3;
        for (int i = x; i < x + 3; i++) {
            for (int j = y; j < y + 3; j++) {
                if (board[i][j] == '0' + num)
                    return false;
            }
        }
        return true;
    }
};