class Solution {
public:
    vector<vector<int>> ans;
    vector<int> res;
    void  helper(int start,int n, int k)
    {
        if(res.size() == k){
            ans.push_back(res); 
            return;
        }
        // simple backtracking, push i & then pop back
        for(int i = start; i <= n; i++){
            res.push_back(i);
            helper(i+1,n,k);
            res.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        helper(1, n, k);
        return ans;
    }
};