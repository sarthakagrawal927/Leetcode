class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> arr(128,-1);
        int start = -1, n = s.size(), maxLen = 0;
        
        for(int i = 0; i < n; i++){
            start = max(start, arr[s[i]]);
            arr[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        
        return maxLen;
    }
};