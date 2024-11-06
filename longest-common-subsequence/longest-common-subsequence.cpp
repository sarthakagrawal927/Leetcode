class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> arr(n+1, vector<int>(m+1,0));
        
        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(text1[i-1] == text2[j-1]) arr[i][j] = 1 + arr[i-1][j-1];
                else arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
                ans = max(arr[i][j], ans);
            }
        }
        return ans;
    }
};