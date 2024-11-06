class Solution {
    vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};
    int n,m;
    bool inRange(int i,int j){
        return i >= 0 && j >= 0 && i < n && j < m;
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int count = 0;
        n = grid.size(), m = grid[0].size();
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(grid[i][j] == 2)
                    q.push({i,j});
        
        int freshConverted = 0;
        
        while(q.size()){
            int n = q.size();
            cout << n << " ";
            for(int i = 0; i < n; i++){
                auto curr = q.front(); q.pop();
                for(auto d : dir){
                    int x = curr.first + d[0], y = curr.second + d[1];
                    if(inRange(x,y) && grid[x][y] == 1){
                        grid[x][y] = 2;
                        freshConverted = 1;
                        q.push({x,y});
                    }
                }
            }
            count++;
        }
        cout << endl;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            { 
                cout << grid[i][j] << " ";
                if(grid[i][j] == 1) return -1;
            }
            cout << endl;
        }
        
        if(!freshConverted) return 0;  
        return count - 1;
    }
};

/*
2 2 2
2 2 2
0 2 2

*/