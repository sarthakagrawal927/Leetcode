class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0, n = columnTitle.size();
        for(int i = 0; i < n; i++){
            ans += (columnTitle[i] - 'A' + 1) * (int)pow(26, n-i-1);
        }
        return ans;
    }
};