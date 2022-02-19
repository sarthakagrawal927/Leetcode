class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trusted(n,0), trusts(n,0);
        for(auto t : trust){
            trusted[t[1]-1]++;
            trusts[t[0]-1]++;
        }
        for(int i = 0; i < n; i++){
            if(trusted[i] == n-1 && trusts[i] == 0) return i+1;
        }
        return -1;
    }
};