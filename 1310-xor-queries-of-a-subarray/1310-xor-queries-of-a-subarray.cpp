class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> ans(n);
        for(int i = 0; i < arr.size()-1; i++){
            arr[i+1] ^= arr[i];
        }
        for(int i = 0; i < n; i++){
            int a = queries[i][0], b = queries[i][1];
            ans[i] = arr[b];
            if(a > 0) ans[i] ^= arr[a-1];
        }
        return ans;
    }
};