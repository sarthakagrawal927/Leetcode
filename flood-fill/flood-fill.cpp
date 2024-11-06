class Solution {
public:
    int n,m;
    void dfs(vector<vector<int>> &image, int r, int c, int currColor, int targetColor){
        if(r < 0 || c < 0 || r >= n || c >= m || image[r][c] != currColor) return;
        
        image[r][c] = targetColor;
        dfs(image, r+1,c, currColor, targetColor);
        dfs(image, r-1,c, currColor, targetColor);
        dfs(image, r,c+1, currColor, targetColor);
        dfs(image, r,c-1, currColor, targetColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        n = image.size(), m = image[0].size();
        
        if (image[sr][sc] != newColor)
            dfs(image,sr,sc,image[sr][sc], newColor);
        
        return image;
    }
};