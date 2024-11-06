class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        if(grid[0][0]) return 0;
        grid[0][0] = 1;
        for(int i = 1; i < m; i++) grid[i][0] = (grid[i-1][0] && !grid[i][0]) ? 1 : 0;
        for(int j = 1; j < n; j++) grid[0][j] = (grid[0][j-1] && !grid[0][j]) ? 1 : 0;
        
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(grid[i][j]) grid[i][j] = 0;
                else grid[i][j] = grid[i-1][j] + grid[i][j-1];
            }
        }
        
        return grid[m-1][n-1];

    }
};