class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        queue<pair<int,int>> q;
        int n = grid.size();
        vector<vector<int>> dir = {{1,1},{1,0},{1,-1},{0,-1},
                                   {0,1},{-1,0},{-1,-1},{-1,1}};
        
        vector<vector<int>> vis(n, vector<int>(n,0));
        
        if(grid[0][0] || grid[n-1][n-1]) return -1;
        
        q.push({0,0}); 
        vis[0][0] = 1;
        
        int ans = 0;

        while(q.size()){
            int steps = q.size();
            ans++;
            
            for(int i = 0; i < steps; i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                if(x == n-1 && y == n-1) return ans;
                
                for(int j = 0; j < 8; j++){
                    int x1 = x + dir[j][0];
                    int y1 = y + dir[j][1];
                    if(min(x1,y1) >= 0 && max(x1,y1) < n && !vis[x1][y1] && !grid[x1][y1]){
                        q.push({x1,y1});
                        vis[x1][y1] = 1;
                    }
                }
            }
        }
        
        return -1;
    }
};