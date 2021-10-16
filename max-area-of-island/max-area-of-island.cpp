class Solution {
    int n,m;
    int dfs(vector<vector<int>> &grid, int r, int c){
        int count = 0;
        if(r < 0 || c < 0 || r >= n || c >= m || grid[r][c] == 0 ) return 0;
        
        grid[r][c] = 0;
        count = 1;
        
        count += dfs(grid,r+1,c) + dfs(grid, r-1,c) + dfs(grid, r,c+1) + dfs(grid, r, c-1);
        
        return count;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        n = grid.size(), m = grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j]) maxArea = max(maxArea, dfs(grid,i,j));
            }
        }
        return maxArea;
    }
};