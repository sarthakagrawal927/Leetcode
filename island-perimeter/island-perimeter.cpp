class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0, row = grid.size(), col = grid[0].size();
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 0){
                    if(i > 0 && grid[i-1][j] == 1)  count++; 
                    if(j > 0 && grid[i][j-1] == 1) count++; 
                    if(i < row-1 && grid[i+1][j] == 1) count++; 
                    if(j < col-1 && grid[i][j+1] == 1) count++; 
                }
                else{
                    if(i == 0) count++;
                    if(i == row-1) count++;
                    if(j == 0 ) count++;
                    if(j == col-1) count++;
                }
            }
        }
        return count;
    }
};