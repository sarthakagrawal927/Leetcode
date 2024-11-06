class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> minLen(triangle[n-1]);
        
        for(int line = n-2; line >= 0; line--){
            for(int i = 0; i <= line; i++){
                minLen[i] = triangle[line][i] + min(minLen[i], minLen[i+1]);
            }
        }
        return minLen[0];
    }
};
/*

4 1 8 3
7 6 10
9 10
11


*/