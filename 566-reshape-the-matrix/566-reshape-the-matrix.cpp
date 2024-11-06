class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r,vector<int>(c,0));
        int m = mat.size(), n = mat[0].size();
        if(r*c != m*n ) return mat;
        for(int i = 0; i < n*m; i++){
            ans[i/c][i%c] = mat[i/n][i%n];
        }
        return ans;
    }
};