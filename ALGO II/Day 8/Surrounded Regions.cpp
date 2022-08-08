class Solution {
public:
    void flip(vector<vector<char>> &board, int x, int y) {
        if (board[x][y] != 'O') return;
        static int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
        int m = board.size(), n = board[0].size();
        
        board[x][y] = 'E';
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                flip(board, nx, ny);
            }
        }
    }
    
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;
        int m = board.size(), n = board[0].size();
        
        for (int i = 0; i < m; i++) {
            flip(board, i, 0);
            flip(board, i, n - 1);
        }
        
        for (int j = 0; j < n; j++) {
            flip(board, 0, j);
            flip(board, m - 1, j);
        }
        
        for (auto &row : board) {
            for (auto &c : row) {
                if (c == 'E') {
                    c = 'O';
                } else if (c == 'O') {
                    c = 'X';
                }
            }
        }
    }
};