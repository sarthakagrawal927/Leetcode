class Solution {
    int m,n;
    void dfs(vector<vector<char>> &board, int r, int c){
        if(r < 0 || r == m || c < 0 || c == n || board[r][c] != 'O') return;
        board[r][c] = '#';
        dfs(board, r+1,c);
        dfs(board, r-1,c);
        dfs(board,r,c+1);
        dfs(board,r,c-1);
    }
public:
    void solve(vector<vector<char>>& board) {
        m = board.size(), n = board[0].size();
        
        for(int i = 0; i < m; i++){
            if(board[i][0] == 'O') dfs(board,i,0);
            if(board[i][n-1] == 'O') dfs(board,i,n-1);
        }
        
        for(int i = 0; i < n; i++){
            if(board[0][i] == 'O') dfs(board,0,i);
            if(board[m-1][i] == 'O') dfs(board,m-1,i);
        }
        
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++){
                if(board[i][j] == '#') board[i][j] = 'O';
                else if(board[i][j] == 'O') board[i][j] = 'X';
            }
    }
};